#include "monty.h"

int main(int argc, char *argv[])
{
	char *buffer;
	char *val;
	char *oc;
	int chars_read = 0, i = 0, j = 0, k = 0, fd = 0;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		printf("Error: Can't open file <file>\n");
		exit(EXIT_FAILURE);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	chars_read = read(fd, buffer, 1024);
	if (chars_read < 0)
	{
		printf("Error: Can't read file <file>\n");
		exit(EXIT_FAILURE);
	}
	oc = malloc(sizeof(char) * 10);
	val = malloc(sizeof(char) * 10);
	while (buffer[i] != '\0')
	{
		if (buffer[i] != ' ' && buffer[i] != '\n')
		{
			oc[j] = buffer[i];
			j++;
		}
		else
		{
			oc[j + 1] = '\0';
			if (buffer[i] == ' ')
			{
				i++;
			}
			while (buffer[i] != '\n')
			{
				val[k] = buffer[i];
				i++;
				k++;
			}
			val[k + 1] = '\0';
			line_number++;
			opcode(oc, line_number);
			j = 0;
			k = 0;
		}
		i++;
	}
	printf("Buffer : %s", buffer);
	printf("Value : %s\n", val);
	printf("Opcode : %s\n", oc);
	return (0);
}
