#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array.
 * @width: width.
 * @height: height.
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **new;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	new = malloc(sizeof(int *) * height);
	if (!new)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		new[i] = malloc(sizeof(int) * width);
		if (!new[i])
		{
			for (; i != 0; i--)
				free(new[i - 1]);
			free(new);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			new[i][j] = 0;
	}
	return (new);
}
