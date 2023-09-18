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
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string.
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * puts_half - print the second half of the string
 * @str: the string
*/

void puts_half(char *str)
{
	int len = _strlen(str) - 1;

	_puts(str + (len / 2));
}
