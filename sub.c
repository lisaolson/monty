#include "monty.h"

/**
 * sub - subtracts top element from second top element
 * @stack: doubly linked list stack
 * @line_number: number of lines
 * Return: void
*/
void sub(stack_t **stack, unsigned int line_number)
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
		printf("%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	total = (*stack)->n - ((*stack)->next)->n;
	((*stack)->next)->n = total;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
