#include "monty.h"
/**
 * f_div - divide 2 element in stack.
 * @hheadd: header of stack
 * @count: the line num
 * Return: no return
*/
void f_div(stack_t **hheadd, unsigned int count)
{
	stack_t *hh;
	int l = 0, auxx;

	hh = *hheadd;
	while (hh)
	{
		hh = hh->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	hh = *hheadd;
	if (hh->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	auxx = hh->next->n / hh->n;
	hh->next->n = auxx;
	*hheadd = hh->next;
	free(hh);
}
