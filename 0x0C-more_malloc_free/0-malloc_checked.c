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
		return(98);
	return (p);
}
