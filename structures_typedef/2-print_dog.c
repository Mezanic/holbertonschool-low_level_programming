#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a struct dog
 * @d: pointer of a struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if(d->age == 0 || d->name == NULL || d->owner == NULL)
	{
		d->age = -1.0f;
		d->owner = "(nil)";
		d->name = "Name: (nil)";
	}

	printf("Name: %s\n""Age: %f\n""Owner: %s\n", d->name, d->age, d->owner);

}
