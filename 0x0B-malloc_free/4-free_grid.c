#include "main.h"
#include <stdio.h>
/**
 * free_grid - frees a 2D grid created in malloc_grid.
 * @grid: pointer to pointer
 * @height: height to grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
