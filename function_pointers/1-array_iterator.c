#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of array
 * @array: array of int
 * @size: size of array
 * @action: pointer to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	action(array[i]);

}
