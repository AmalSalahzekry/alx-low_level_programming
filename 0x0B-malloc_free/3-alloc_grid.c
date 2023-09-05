#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: the width of array
 * @height: the height of array
 * Return: pointer to array or null
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int a;
	int c;

	ptr = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			ptr[a] = malloc(sizeof(**ptr) * width);
			if (ptr[a] == 0)
			{
				while (a--)
					free(ptr[a]);
				free(ptr);

				return (NULL);
			}
			for (c = 0; c < width; c++)
				ptr[a][c] = 0;
		}
	}
	return (ptr);
}

