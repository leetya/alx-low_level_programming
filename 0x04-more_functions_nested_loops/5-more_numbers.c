#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
