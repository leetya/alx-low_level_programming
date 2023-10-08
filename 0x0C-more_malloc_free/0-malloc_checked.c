#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: the size.
 * Return: the address of the allocated memory
*/

void    *malloc_checked(unsigned int b)
{
	void *p;

	if (b < INT_MAX)
		p = malloc(b * sizeof(unsigned int));
	else
		exit(98);
	if (!p)
		exit(98);
	return (p);
}
