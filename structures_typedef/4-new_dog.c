#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog.
 * @name: name of doggo
 * @age: age of doggo
 * @owner: happy humain with doggo
 *
 * Return: new doggo
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, h = 0;
	dog_t *new_dog;

	while (name[i])
		i++;

	while (owner[j])
		j++;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((i + 1) * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc((j + 1) * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (h = 0; h < j; h++)
		new_dog->owner[h] = owner[h];

	for (h = 0; h < i; h++)
		new_dog->name[h] = name[h];

	new_dog->age = age;
	return (new_dog);
}
