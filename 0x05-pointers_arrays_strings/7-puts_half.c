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
		putchar(*str);
		str++;
	}
	putchar('\n');
}

/**
 * puts_half - print the second half of the string
 * @str: the string
*/

void puts_half(char *str)
{
	long len = _strlen(str);
	long i;

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else if (len % 2)
	{
		for (i = (len - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i + 1]);
	}
	_putchar('\n');
}
