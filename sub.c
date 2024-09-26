#include "monty.h"
/**
  *f_sub- for subtraction
  *@hheadd: stack head
  *@count: line_number
  *Return: no return
 */
void f_sub(stack_t **hheadd, unsigned int count)
{
	stack_t *auxx;
	int suss, ndess;

	auxx = *hheadd;
	for (ndess = 0; auxx != NULL; ndess++)
		auxx = auxx->next;
	if (ndess < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	auxx = *hheadd;
	suss = auxx->next->n - auxx->n;
	auxx->next->n = suss;
	*hheadd = auxx->next;
	free(auxx);
}
