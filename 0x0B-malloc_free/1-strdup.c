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
 * _strdup -  a function that
 * returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 * Return: a pointer to str
*/

char *_strdup(char *str)
{
	char *new;
	int i, len;

	if (!str)
		return (NULL);
	len = _strlen(str) + 1;
	new = malloc(sizeof(char) * (_strlen(str) + 1));
	if (!new)
		return (NULL);
	for (i = 0; i < len ; i++)
	{
		new[i] = *str;
		str++;
	}
	return (new);
}
