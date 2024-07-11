#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize variable stuct dog
 * @d: pointer
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;

}
