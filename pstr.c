#include "monty.h"
/**
 * f_pstr - print stack
 * @hheadd: header of stack
 * @countt: line_number
 * Return: no return
*/
void f_pstr(stack_t **hheadd, unsigned int countt)
{
	stack_t *hh;
	(void)countt;

	hh = *hheadd;
	while (hh)
	{
		if (hh->n > 127 || hh->n <= 0)
		{
			break;
		}
		printf("%c", hh->n);
		hh = hh->next;
	}
	printf("\n");
}
