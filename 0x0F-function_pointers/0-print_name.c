#include "function_pointers.h"

/**
 * print_name - callback
 * @name: str
 * @f: function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
