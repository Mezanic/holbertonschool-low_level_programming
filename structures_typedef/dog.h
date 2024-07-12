#ifndef dog_H
#define dog_H

/**
 * struct dog - variable needed for identify dog
 * @name: is libellé
 * @owner: owner of dog
 * @age: time since the dog as spwan
 *
 * Description: primary information of the dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
