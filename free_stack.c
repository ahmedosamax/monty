#include "monty.h"
/**
* free_stack - free list
* @hheadd: stack head
*/
void free_stack(stack_t *hheadd)
{
	stack_t *auxx;

	auxx = hheadd;
	while (hheadd)
	{
		auxx = hheadd->next;
		free(hheadd);
		hheadd = auxx;
	}
}
