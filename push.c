#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: doubly linked list stack
 * line_number: counts number of lines
 * Return: void
*/

void push(stack_t **stack, unsigned int line_number)
{

	int i = 0, value = 0, j = 0;
	char *a;
	stack_t *new;

	(void)line_number;
	while (buffer[i] != '\0' && buffer[i] != ' ')
	{
		i++;
	}
	a = malloc(sizeof(char) * 10);
	if (a == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	while (buffer[i] != '\0')
	{
		a[j] = buffer[i];
		i++;
		j++;
	}
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
		new->next = *stack;
		new->prev = NULL;
		*stack = new;
	}
	new->next = *stack;
	(*stack)->prev = NULL;
	*stack = new;
	free(a);
}
