#include "monty.h"
/**
 * f_queue - prints the top
 * @hheadd: header of stack
 * @countt: number of line
 * Return: no return
*/
void f_queue(stack_t **hheadd, unsigned int countt)
{
	(void)hheadd;
	(void)countt;
	bus.liifii = 1;
}

/**
 * addqueue - add node
 * @nn: the new value
 * @hheadd: the header of stack
 * Return: no return
*/
void addqueue(stack_t **hheadd, int nn)
{
	stack_t *nw_node, *auxx;

	auxx = *hheadd;
	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
		printf("Error\n");
	}
	nw_node->n = nn;
	nw_node->next = NULL;
	if (auxx)
	{
		while (auxx->next)
			auxx = auxx->next;
	}
	if (!auxx)
	{
		*hheadd = nw_node;
		nw_node->prev = NULL;
	}
	else
	{
		auxx->next = nw_node;
		nw_node->prev = auxx;
	}
}
