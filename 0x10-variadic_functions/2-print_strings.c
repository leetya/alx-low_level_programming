#include "variadic_functions.h"

/**
 * print_strings - prints strs
 * @separator: used to separate strs
 * @n: number of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *s;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(p, char *);
		printf("%s", s ? s : ("(nil)"));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
