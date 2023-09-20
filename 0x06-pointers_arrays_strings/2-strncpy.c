#include "main.h"
#include <string.h>
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
 * _strncpy - cpies a string
 * @dest: destination
 * @src: source
 * @n: bytes to concat
 * Return: Returns a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	i = 0;
	while (i < n - 1)
	{
		dest[i] = *src;
		if (*src)
			src++;
		i++;
	}
	return (dest);
}
