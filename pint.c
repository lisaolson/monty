#include "monty.h"

/**
 * pint - prints value at the top of the stack
 * @stack: doubly linked list stack
 * line_number: counts number of lines
 * Return: void
*/

void pint(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
