#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: used to separate numbers
 * @n: number of args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
