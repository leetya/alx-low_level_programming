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
 * rev_string - reverse a string
 * @s: the string
*/

void rev_string(char *s)
{
	int len = _strlen(s) - 1;
	int i, tmp;

	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		if (i == len / 2)
			break;
	}
}
