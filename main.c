#define _GNU_SOURCE
#include "monty.h"

char *buffer;

int main(int argc, char *argv[])
{
	char *val;
	char *oc;
	FILE *fd;
	size_t bufsize;
	int chars_read = 0, i = 0, j = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
/*        stack_t *new;
        stack_t *new2;
        stack_t *new3;

	new = malloc(sizeof(stack_t));
        new2 = malloc(sizeof(stack_t));
        new3 = malloc(sizeof(stack_t));
        new->n = 1;
        new2->n = 2;
        new3->n = 3;

        stack = new;
        new->next = new2;
        new2->next = new3;
        new3->next = NULL;
        new3->prev = new2;
        new2->prev = new;
        new->prev = NULL;
*/
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		printf("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}
	oc = malloc(sizeof(char) * 10);
	val = malloc(sizeof(char) * 10);
	while (chars_read != -1)
	{
		buffer = NULL;
		bufsize = 0;
		i = 0;
		j = 0;
		chars_read = getline(&buffer, &bufsize, fd);
		line_number++;
		if (buffer[0] == '\n')
			continue;
		while(buffer[i] != '\n' && buffer[i] != '\0')
		{
			oc[j] = buffer[i];
			if (buffer[i] == ' ')
			{
				oc[j] = '\0';
			}
			i++;
			j++;
		}
		oc[j] = '\0';
		if (oc[0] == '\0')
			break;
		opcode(&stack, oc, line_number);
		free(buffer);
	}
	fclose(fd);
	free(buffer);
	free(oc);
	free(val);
	free_stack(stack);
	return (0);
}
