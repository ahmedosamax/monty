#include "monty.h"
/**
* execute - execute
* @stackk: head of linkedd list
* @countt: line countintg
* @filee: pointer to the monty file
* @contt: the line cont
* Return: no return
*/
int execute(char *contt, stack_t **stackk, unsigned int countt, FILE *filee)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *opp;

	opp = strtok(contt, " \n\t");
	if (opp && opp[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && opp)
	{
		if (strcmp(opp, opst[j].opcode) == 0)
		{	opst[j].f(stackk, countt);
			return (0);
		}
		j++;
	}
	if (opp && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", countt, opp);
		fclose(filee);
		free(contt);
		free_stack(*stackk);
		exit(EXIT_FAILURE); }
	return (1);
}
