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
 * string_nconcat - contate n bytes.
 * @s1: string 1
 * @s2: string 2
 * @n: the lenght to be copied
 * Return: address to the
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int i, j, s1len, s2len;

	if (!s1 || !s2)
	{
		if (!s1)
			s1 = "";
		else
			s2 = "";
	}
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	new = malloc(sizeof(char) * ((s1len + s2len) + 1));
	if (!new)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		new[i] = s1[i];
	for (j = 0; j < _strlen(s2) && (unsigned int)j < n; j++)
		new[i++] = s2[j];
	new[i] = '\0';
	return (new);
}
