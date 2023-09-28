#include "main.h"

/**
 * calc_square - a helper function
 * @n: the original value
 * @i: an iterator to calculate the square.
 * Return: the value
*/

int	calc_square(int n, int i)
{
	if (i * i == n)
		return (i);
	return (calc_square(n, i + 1));
}

/**
 * _sqrt_recursion - calculate sqaure using recursion
 * @n: the value to be calculated
 * Return: the value
*/

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	return (calc_square(n, 0));
}
