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
 * print_rev - print a string in reverse
 * @s: the string.
*/

void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len != -1)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
