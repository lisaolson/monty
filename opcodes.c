#include "monty.h"

void opcode(char *oc, unsigned int line_number)
{
	stack_t *stack = NULL;
	stack_t *new;
	stack_t *new2;
	stack_t *new3;
	instruction_t opcodes[] = {
		{"pall", pall},
		{"pint", pint},
		{"add", add},
		{"swap", swap},
		{"pop", pop},
		{"nop", nop},
		{NULL, NULL}
	};

	int i = 0;

	new = malloc(sizeof(stack_t));
	new2 = malloc(sizeof(stack_t));
	new3 = malloc(sizeof(stack_t));
	new->n = 1;
	new2->n = 2;
	new3->n = 3;

	stack = new;
	new->next = new2;
	new2->next = new3;
	new3->next = NULL;
	new3->prev = new2;
	new2->prev = new;
	new->prev = NULL;

	while(opcodes[i].opcode != NULL)
	{
		if (strcmp(oc, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(&stack, line_number);
			return;
		}
		i++;
	}
	printf("L%u: unknown instruction %s", line_number, oc);
	exit (EXIT_FAILURE);
}
