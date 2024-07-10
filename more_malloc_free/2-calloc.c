#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element
 * @size: size
 *
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, j = 0;
	unsigned int *n;
	unsigned int arr_size = nmemb * size;

		if (nmem == 0 || size == 0)
			return (NULL);

	n = malloc(arr_size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < arr_rize; i++)
	{
		n[i] = 0;
	}
	return (n);
}


