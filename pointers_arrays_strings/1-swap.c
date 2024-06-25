#include "main.h"

/**
 * swap_int -swap the value 
 * @a: value 1
 * @b: value 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swapp;

	swapp = *a;
	*a = *b;
	*b = swapp;
	
}
