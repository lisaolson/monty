#include "monty.h"

/**
 * add - adds two elements of the stack
 * @stack: doubly linked list stack
 * @line_number: counts number of lines
 * Return: void
*/

void add(stack_t **stack, unsigned int line_number)
{
	int total;
	int stack_count;
	stack_t *temp;

	stack_count = 0;
	temp = *stack;
	while (temp != NULL)
	{
		temp = temp->next;
		stack_count++;
	}
	if (stack_count < 2)
	{
		printf("L%u: can't add, stack stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	total = (*stack)->n + ((*stack)->next)->n;
	((*stack)->next)->n = total;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
