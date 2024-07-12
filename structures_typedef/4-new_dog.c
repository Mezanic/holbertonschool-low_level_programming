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

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;

	new_dog->name = malloc(i * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (h = 0; h < i; h++)
		new_dog->name[i] = name[i];

	while (owner[j] != '\0')
		j++;
	new_dog->owner = malloc(j * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (h = 0; h < j; h++)
		new_dog->owner[j] = owner[j];
	new_dog->age = age;
	return (new_dog);
}
