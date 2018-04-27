#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: doubly linked list stack
 * @line_number: counts number of lines
 * Return: void
*/

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;

	if (*stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	if ((*stack)->next == NULL)
	{
		*stack = NULL;
		free(temp);
		return;
	}
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
