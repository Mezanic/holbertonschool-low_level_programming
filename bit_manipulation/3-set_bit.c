#include "main.h"

/**
 * set_bit - unction that sets the value of a bit to 1 at a given index
 * @n: pointer to number we want to set a value
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1)


}
