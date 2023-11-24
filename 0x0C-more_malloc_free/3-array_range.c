#include "main.h"
#include <stdlib.h>

/**
 * array_range - values from min to max
 * @min: min val;
 * @max: max val;
 * Return: p.
*/

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	if (!p)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
