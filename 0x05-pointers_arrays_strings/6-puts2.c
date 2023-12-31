#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string
*/

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
		if (*(str - 1) == '\0')
			break;
	}
	_putchar('\n');
}
