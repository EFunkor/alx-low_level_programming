#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: The height dimension of the grid
 * Description: Frees the memory of the grid
 * Return: nothing 0
 *
 */
void free_grid(int **grid, int height)
{
	int w;

	for (w = 0; w < height; w++)
	{
		free(grid[w]);
	}
	free(grid);
}

