#include "main.h"
#include <stdlib.h>

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
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: max number of chars
 * Return: pointer of an array of chars
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	size_t s1_len, s2_len, k, i;

	if (!s1 || !s2)
	{
		if (!s1)
			s1 = "";
		if (!s2)
			s2 = "";
	}
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (s2_len < n)
		n = s2_len;
	new = malloc(sizeof(char) * (s1_len + n + 1));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (k = 0; k < s1_len; k++)
		new[k] = s1[k];
	i = s2_len;
	for (s2_len = 0; s2_len <= i && n; s2_len++)
	{
		new[k++] = s2[s2_len];
		n--;
	}
	new[k] = '\0';
	return (new);
}
