#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct display - Struct display
 * @value: The type
 * @p: a pointer to The function associated
 */

typedef struct display
{
	char value;
	void (*p)(va_list *);
} display_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
