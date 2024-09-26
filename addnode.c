#include "monty.h"
/**
 * addnode - add node to head
 * @hheadd: the head of stack
 * @num: value
 * Return: no return
*/
void addnode(stack_t **hheadd, int num)
{

	stack_t *nw_node, *auxx;

	auxx = *hheadd;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxx)
		auxx->prev = nw_node;
	nw_node->n = num;
	nw_node->next = *hheadd;
	nw_node->prev = NULL;
	*hheadd = nw_node;
}
