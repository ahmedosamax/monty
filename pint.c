#include "monty.h"
/**
 * f_pint - print the top of stack
 * @hheadd: header of stack
 * @count: number of lines
 * Return: no return
*/
void f_pint(stack_t **hheadd, unsigned int count)
{
	if (*hheadd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hheadd)->n);
}
