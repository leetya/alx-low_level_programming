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
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int len, j;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	strout = (char *)malloc(sizeof(char) * (len + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
		strout[j] = str[j];
	return (strout);
}
