#include "main.h"

/**
 * actual_prime - a helper function
 * @n: the number
 * @i: an iterator
 * Return: a recurs way to iterat
*/

int actual_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_prime(n, i + 1));
}

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: the number
 * Return: 1 if prime 0 if not.
*/

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (actual_prime(n, 2));
}
