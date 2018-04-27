#include "monty.h"

/**
 * add - adds two elements of the stack
 * @stack: doubly linked list stack
 * line_number: counts number of lines
 * Return: void
*/

void add(stack_t **stack, unsigned int line_number)
{
	int total;
	stack_t *temp;

	(void)line_number;
	total = (*stack)->n + ((*stack)->next)->n;
	((*stack)->next)->n = total;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
