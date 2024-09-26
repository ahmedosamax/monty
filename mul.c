#include "monty.h"
/**
 * f_mul - multiply.
 * @hheadd: header of stack
 * @count: number of line
 * Return: no return
*/
void f_mul(stack_t **hheadd, unsigned int count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	hh = *hheadd;
	auxx = hh->next->n * hh->n;
	hh->next->n = auxx;
	*hheadd = hh->next;
	free(hh);
}
