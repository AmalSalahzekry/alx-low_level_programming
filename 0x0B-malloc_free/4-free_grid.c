#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 * @grid: the grid
 * @height: the hight of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int size;

	for (size = 0; size < height; size++)
	{
		free(grid[size]);
	}
	free(grid);
}
