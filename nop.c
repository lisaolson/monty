#include "monty.h"

/**
 * nop - doesn't do anything
 * @stack: doubly linked list stack
 * @line_number: counts number of lines
 * Return: void
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	{};
}
