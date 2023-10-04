#include "main.h"

/**
 * _free - a function to free memory
 * @arr: the memory to be freed
*/

void _free(int **arr)
{
	while (*arr)
		free(*arr);
}

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
			_free(two_d);
			free(two_d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			two_d[i][j] = 0;
	}
	return (two_d);
}
