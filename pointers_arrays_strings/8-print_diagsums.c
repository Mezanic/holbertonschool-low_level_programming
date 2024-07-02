#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer for value
 * @size :size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int r = 0;
	int sump = 0, sums = 0;

	for (r = 0; r < size; r++)
	{
		sump += a[r * size + r];

		sums += a[r * size + (size - 1 - r)];

	}
	printf("%d, %d\n", sump, sums);
}
