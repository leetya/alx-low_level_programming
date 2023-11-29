#include "function_pointers.h"

/**
 * int_index - search for an elemnt
 * @array: array of elemnts
 * @size: size of the array
 * @cmp: pointer to the function used to compare
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && !cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
