#include "main.h"
#include <unistd.h>

/**
 * print_binary - prints the bn of n
 * @n: the nbr
*/

void print_binary(unsigned long int n)
{
	int res;

	if (n)
	{
		if (n >> 1)
			print_binary(n >> 1);
		res = (n & 1) + '0';
		write(1, &res, 1);
	}
	else
		write(1, "0", 1);
}
