#include "monty.h"
/**
 * f_pop - pop the top
 * @hheadd: the header of stack
 * @countt: number of line
 * Return: no return
*/
void f_pop(stack_t **hheadd, unsigned int countt)
{
	stack_t *hh;

	if (*hheadd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	hh = *hheadd;
	*hheadd = hh->next;
	free(hh);
}
