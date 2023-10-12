#include "variadic_functions.h"

/**
* sum_them_all - afunction that prints numbers, followed by a new line
* @separator: the string to be printed between numbers
* @n: number of args
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list p;

	if (!separator)
		return ;
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != n - 1)
			printf("%s", separator);
		else
			printf("\n");
	}    
}
