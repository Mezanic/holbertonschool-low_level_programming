#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional
 * @grid: array
 * @height: hauteur
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
