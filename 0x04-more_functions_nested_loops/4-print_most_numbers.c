#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, except 2 && 4, followed by a new line
*/

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			_putchar(a);
	}
	_putchar('\n');
}
