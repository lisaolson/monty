#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: doubly linked list stack
 * @line_number: counts number of lines
 * Return: void
*/

void push(stack_t **stack, unsigned int line_number)
{

	int i = 0, value = 0, j = 0;
	char *a;
	stack_t *new;

	(void)line_number;
	if (*stack == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	while (buffer[i] != '\0' && buffer[i] != ' ')
	{
		i++;
	}
	a = malloc(sizeof(char) * 12);
	if (a == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	i++;
	while (buffer[i] != '\0')
	{
		a[j] = buffer[i];
		i++;
		j++;
	}
	a[j] = '\0';
	value = atoi(a);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = value;
	if (*stack == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		new->prev = NULL;
		*stack = new;
	}
	free(a);
}
