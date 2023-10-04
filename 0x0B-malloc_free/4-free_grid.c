#include "main.h"

/**
 * free_grid - a function to free memory
 * @height: the number of allocate memory before the fail
 * @grid: the memory to be freed
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
