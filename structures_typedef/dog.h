#ifndef dog
#define dog

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
	
} dog;
#endif
