#include "monty"

/**
 * _strcmp - compares two strings
 * @s1: pointer s1
 * @s2: pointer s2
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int diff;
int c;
	c = 0;
	while ((s1[c] != '\0' || s2[c] != '\0') && (s1[c] == s2[c]))
	{
		c++;
	}
	if (s1[c] != s2[c])
	{
		diff = s1[c] - s2[c];
	}
	else
	{
		diff = 0;
	}
	return (diff);
}
