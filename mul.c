#include "monty.h"

/**
 * mul - multiplies second top element with the top
 * @stack: doubly linked list stack
 * @line_number: number of lines
 * Return: void
*/
void mul(stack_t **stack, unsigned int line_number)
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
		printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	total = (*stack)->n * ((*stack)->next)->n;
	((*stack)->next)->n = total;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(temp);
}
