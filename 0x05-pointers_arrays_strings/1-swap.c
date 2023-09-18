#include "main.h"

/**
 * swap_int - swap two ints
 * @a: pointer to int
 * @b: pointer to int
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
