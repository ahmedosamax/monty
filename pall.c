#include "monty.h"
/**
 * f_pall - print stack
 * @hheadd: header of stack
 * @countt: no used
 * Return: no return
*/
void f_pall(stack_t **hheadd, unsigned int countt)
{
	stack_t *hh;
	(void)countt;

	hh = *hheadd;
	if (hh == NULL)
		return;
	while (hh)
	{
		printf("%d\n", hh->n);
		hh = hh->next;
	}
}
