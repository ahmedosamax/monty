#include "monty.h"
/**
 * f_push - add node to the stack
 * @hheadd: header of stack
 * @countt: line_number
 * Return: no return
*/
void f_push(stack_t **hheadd, unsigned int countt)
{
	int i, k = 0, fl = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				fl = 1; }
		if (fl == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", countt);
			fclose(bus.file);
			free(bus.cont);
			free_stack(*hheadd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", countt);
		fclose(bus.file);
		free(bus.cont);
		free_stack(*hheadd);
		exit(EXIT_FAILURE); }
	i = atoi(bus.arg);
	if (bus.liifii == 0)
		addnode(hheadd, i);
	else
		addqueue(hheadd, i);
}
