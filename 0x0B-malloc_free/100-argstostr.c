#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be counted.
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: the number of arguments
 * @av: the arguments
 * Return: a pointer to the new s
*/

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len = 0;
	char *new;

	if (!ac || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += (_strlen(av[i]) + 1);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	len = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new[len] = av[i][j];
			len++;
		}
		new[len++] = '\n';
	}
	new[len] = '\0';
	return (new);
}
