#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @index:  the index, starting from 0 of the bit you want to get
 * @n: integer
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	n >>= index;

	return (n & 1);
}
