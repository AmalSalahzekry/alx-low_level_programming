#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: the grid of memory
 * @height: array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int m = 0;

	for (; m < height; m++)
		free(grid[m]);
	free(grid);
}
