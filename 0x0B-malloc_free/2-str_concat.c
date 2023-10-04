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
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the new string.
*/

char *str_concat(char *s1, char *s2)
{
	int i, len;
	char *new;

	if (!s1 || !s2)
	{
		if (!s1)
			s1 = "";
		else
			s2 = "";
	}
	new = malloc(sizeof(char) * ((_strlen(s1) + _strlen(s2)) + 1));
	len = _strlen(s1);
	if (!new)
		return (NULL);
	for (i = 0; i < len; i++)
		new[i] = s1[i];
	for (i = 0; i <= _strlen(s2); i++)
		new[i + len] = s2[i];
	return (new);
}
