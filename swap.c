#include "monty.h"
/**
 * f_swap - for swap.
 * @hheadd: header of stack
 * @countt: line of number
 * Return: no return
*/
void f_swap(stack_t **hheadd, unsigned int countt)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	hh = *hheadd;
	auxx = hh->n;
	hh->n = hh->next->n;
	hh->next->n = auxx;
}
