#include "monty.h"
/**
 * f_pchar - print char of header of stack,
 * @hheadd: header of stack
 * @countt: line_number
 * Return: no return
*/
void f_pchar(stack_t **hheadd, unsigned int countt)
{
	stack_t *hh;

	hh = *hheadd;
	if (!hh)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	if (hh->n > 127 || hh->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", hh->n);
}
