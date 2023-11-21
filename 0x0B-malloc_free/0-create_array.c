#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: the char
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		cr[i++] = c;
	return (cr);
}
