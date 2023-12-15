#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another.
 * @n: n1
 * @m: n2
 * Return: number of bits needed
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
		m >>= 1;
	}
	return (nbits);
}
