#include "variadic_functions.h"

/**
 * display_char - display format
 * @p: valist p
*/

void display_char(va_list *p)
{
	printf("%c", va_arg(*p, int));
}

/**
 * display_int - display format
 * @p: valist p
*/

void display_int(va_list *p)
{
	printf("%d", va_arg(*p, int));
}

/**
 * display_float - display format
 * @p: valist p
*/

void display_float(va_list *p)
{
	printf("%f", va_arg(*p, double));
}

/**
 * display_str - display format
 * @p: valist p
*/

void display_str(va_list *p)
{
	char *s = va_arg(*p, char *);

	printf("%s", s ? s : "(nil)");
}

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list arg_p;
	int i, j, flag;
	display_t display[4] = {
		{'c', display_char},
		{'i', display_int},
		{'f', display_float},
		{'s', display_str},
	};

	va_start(arg_p, format);
	i = 0;
	flag = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == display[j].value)
			{
				if (flag)
					printf(", ");
				display[j].p(&arg_p);
				flag++;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
