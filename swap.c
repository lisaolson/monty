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

	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	(void)line_number;
	a = (*stack)->n;
	(*stack)->n = ((*stack)->next)->n;
	((*stack)->next)->n = a;
}
