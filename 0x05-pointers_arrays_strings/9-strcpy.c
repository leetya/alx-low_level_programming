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
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: destination
 * Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	if (!dest || !src)
		return (NULL);
	len = _strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
