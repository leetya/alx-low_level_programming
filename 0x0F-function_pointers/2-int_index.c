#include "function_pointers.h"

/**
 * @int_index - a function that searches for an integer.
 * @array: an array contains some random ints
 * @size: the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the match or -1 if no match
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (size <= 0 || !array || !cmp) 
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
