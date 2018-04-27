#include "monty.h"

void opcode(stack_t **stack, char *oc, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"pall", pall},
		{"pint", pint},
		{"push", push},
		{"add", add},
		{"swap", swap},
		{"pop", pop},
		{"nop", nop},
		{NULL, NULL}
	};

	int i = 0;

	while(opcodes[i].opcode != NULL)
	{
		if (strcmp(oc, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			return;
		}
		i++;
	}
	printf("L%u: unknown instruction %s\n", line_number, oc);
	exit (EXIT_FAILURE);
}
