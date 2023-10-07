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
 * _strcat - concatenates
 * @dest: destination
 * @src: source
 * Return: Returns a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int dlen = _strlen(dest);

	while (*src)
	{
		dest[dlen++] = *src;
		src++;
	}
	dest[dlen] = '\0';
	return (dest);
}
