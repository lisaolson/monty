#include "monty.h"

void opcode(char *oc, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"pall", pall},
		{"pint", pint},
		{"add", add},
		{"swap", swap},
		{"pop", pop},
		{"nop", nop},
		{NULL, NULL}
	};
	stack_t *stack = NULL;

	int i = 0;

	while(opcodes[i].opcode != NULL)
	{
		if (_strcmp(oc, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(&stack, line_number);
		}
		i++;
	}
	printf("L%u: unknown instruction %s", line_number, oc);
	return;
}
