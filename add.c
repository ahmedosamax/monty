#include "monty.h"
/**
 * f_add - add elem.
 * @hheadd: header of stack
 * @countt: line_number
 * Return: no return
*/
void f_add(stack_t **hheadd, unsigned int countt)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	hh = *hheadd;
	auxx = hh->n + hh->next->n;
	hh->next->n = auxx;
	*hheadd = hh->next;
	free(hh);
}
