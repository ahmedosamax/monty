#include "monty.h"
/**
 * f_mod - compute the dev rest
 * @hheadd: stack head
 * @countt: number of line
 * Return: no return
*/
void f_mod(stack_t **hheadd, unsigned int countt)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	hh = *hheadd;
	if (hh->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	auxx = hh->next->n % hh->n;
	hh->next->n = auxx;
	*hheadd = hh->next;
	free(hh);
}
