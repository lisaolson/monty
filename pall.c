#include "monty.h"

/**
 * pall - prints all values on the stack
 * @stack: doubly linked list stack
 * @line_number: counts number of lines
 * Return: void
*/

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	if (*stack == NULL)
	{
		exit(1);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
