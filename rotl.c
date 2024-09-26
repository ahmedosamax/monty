#include "monty.h"
/**
  *f_rotl- rotate stack
  *@hheadd: header of stack
  *@countt: line of number
  *Return: no return
 */
void f_rotl(stack_t **hheadd,  __attribute__((unused)) unsigned int countt)
{
	stack_t *tmpp = *hheadd, *auxx;

	if (*hheadd == NULL || (*hheadd)->next == NULL)
	{
		return;
	}
	auxx = (*hheadd)->next;
	auxx->prev = NULL;
	while (tmpp->next != NULL)
	{
		tmpp = tmpp->next;
	}
	tmpp->next = *hheadd;
	(*hheadd)->next = NULL;
	(*hheadd)->prev = tmpp;
	(*hheadd) = auxx;
}
