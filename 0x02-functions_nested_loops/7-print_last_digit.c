#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the digit
 * Return: Returns the value of the last digit
*/

int print_last_digit(int n)
{
	unsigned int nn;

	if (n < 0)
		n *= -1;
	nn = n;
	_putchar((nn % 10) + 48);
	return (nn % 10);
}
