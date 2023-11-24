#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: number of members
 * @size: the size of each
 * Return: p
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int it;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	for (it = 0; it < nmemb; it++)
		p[it] = 0;
	return (p);
}
