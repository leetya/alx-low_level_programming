#include "function_pointers.h"

/**
 * array_iterator - perform action on each element
 * @array: as its name indicate
 * @size: the size of the array
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
