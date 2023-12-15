#include "main.h"

/**
 * set_bit - setbit at spef pos
 * @n: p to the nb
 * @index: indx
 * Return: -1 || 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}

