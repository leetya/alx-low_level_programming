#include "main.h"

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
