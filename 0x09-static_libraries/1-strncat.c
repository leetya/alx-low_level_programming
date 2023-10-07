#include "main.h"

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
 * _strncat - concatenates
 * @dest: destination
 * @src: source
 * @n: bytes to concat
 * Return: Returns a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dlen = _strlen(dest);

	while (*src && n)
	{
		dest[dlen++] = *src;
		src++;
		n--;
	}
	dest[dlen] = '\0';
	return (dest);
}
