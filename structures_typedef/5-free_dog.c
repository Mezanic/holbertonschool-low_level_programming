#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free doggo
 * @d: pointer to the doggo
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
