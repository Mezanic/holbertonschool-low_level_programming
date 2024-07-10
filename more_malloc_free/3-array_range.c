#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *n;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	n = malloc(size * sizeof(int));

	if (n == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		n[i] = min++;

	return (n);
}
