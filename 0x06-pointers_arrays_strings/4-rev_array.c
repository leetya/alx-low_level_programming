#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: the number of elements of the array
 * @a: the array
*/

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
