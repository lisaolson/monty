#include "monty.h"

/**
 * swap - swaps top two elements of the stack
 * @stack: doubly linked list stack
 * @line_number: counts number of lines
 * Return: void
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int a;
	int stack_count = 0;

	while (*stack != NULL)
		stack_count++;

	if (stack_count < 2)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(void)line_number;
	a = (*stack)->n;
	(*stack)->n = ((*stack)->next)->n;
	((*stack)->next)->n = a;
}
