#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: the size.
 * Return: the address of the allocated memory
*/

void    *malloc_checked(unsigned int b)
{
	void *p = malloc(b * sizeof(unsigned int));

	if (!p)
		exit(98);
	return (p);
}
