#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - man realloc
 * @ptr: previous p
 * @old_size: previous size
 * @new_size: new size
 * Return: new p
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
		return (free(ptr), NULL);
	p = malloc(new_size);
	if (!p)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		if (i < old_size)
			p[i] = *(char *)ptr + i;
	}
	free(ptr);
	return (p);
}
