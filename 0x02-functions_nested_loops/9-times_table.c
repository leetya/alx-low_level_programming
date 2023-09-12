#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int table[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * table[j];
			if ((j - 1) != 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (res <= 9)
					_putchar(' ');
			}
			if (res <= 9)
			{
				_putchar((res) + 48);
			}
			else
			{
				_putchar((res / 10) + 48);
				_putchar((res % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
