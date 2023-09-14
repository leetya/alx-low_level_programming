#include "main.h"

/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line
*/

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
