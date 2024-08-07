#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of element
 * @size: size
 *
 * Return: Void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned char  *n;
	unsigned int arr_size = nmemb * size;

		if (nmemb == 0 || size == 0)
			return (NULL);

	n = malloc(arr_size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
	{
		n[i] = 0;
	}
	return (n);
}


