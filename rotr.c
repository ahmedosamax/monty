#include "monty.h"
/**
  *f_rotr- rotates the stack
  *@hheadd: header of stack
  *@countt: number of line
  *Return: no return
 */
void f_rotr(stack_t **hheadd, __attribute__((unused)) unsigned int countt)
{
	stack_t *copy;

	copy = *hheadd;
	if (*hheadd == NULL || (*hheadd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *hheadd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*hheadd)->prev = copy;
	(*hheadd) = copy;
}
