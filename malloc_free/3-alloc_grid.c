#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: largeur
 * @height: hauteur
 *
 * Return: NULL on failure or argument <= 0
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		n[i] = (int *)malloc(sizeof(int) * width);

		if (n[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(n[j]);

			}
			free(n);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
