#include "main.h"

/**
 * put_nbr - print a number using write().
 * @n: the number to be printed.
*/

void	put_nbr(int n)
{
	if (n > 9)
		put_nbr(n / 10);
	_putchar((n % 10) + 48);
}

/**
 * print_comma_sp - print comma and space.
 * @nb: to check if the number is 98.
*/

void	print_comma_sp(int nb)
{
	if (nb != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: starting number.
*/

void print_to_98(int n)
{
	int i;

	if (n <= 98 || n <= 0)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				put_nbr((i * -1));

			}
			else
				put_nbr(i);
			print_comma_sp(i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			put_nbr(i);
			print_comma_sp(i);
		}
	}
	_putchar('\n');
}
