#include "function_pointers.h"
/**
 * array_iterator - a function that executes
 * a function given as a parameter on each element of an array.
 * @array: the array
 * @size: array size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < (int) size; i++)
{
action(array[i]);
}
}
