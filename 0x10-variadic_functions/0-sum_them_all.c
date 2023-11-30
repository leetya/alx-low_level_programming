#include "variadic_functions.h"

/**
 * sum_them_all - as its name suggest
 * @n: number of args
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, res;

	if (n == 0)
		return (0);
	va_start(p, n);
	res = 0;
	for (i = 0; i < n; i++)
		res += va_arg(p, int);
	va_end(p);
	return (res);
}
