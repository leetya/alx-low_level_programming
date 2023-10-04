#include "main.h"

/**
 * alloc_grid - a function
 * that returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to the grid.
*/

int **alloc_grid(int width, int height)
{
	int **two_d;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	two_d = malloc(sizeof(int *) * height);
	if (!two_d)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		two_d[i] = malloc(sizeof(int) * width);
		if (!two_d[i])
		{
			free(two_d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			two_d[i][j] = 0;
	}
	return (two_d);
}
