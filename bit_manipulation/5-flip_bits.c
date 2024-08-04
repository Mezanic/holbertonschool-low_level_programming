#include "main.h"

/**
 * flip_bits -  returns number of bits need to be changed for changed number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_count = 0;
	unsigned long int bits_diff = n ^ m;

	while (bits_diff > 0)
	{
		bits_count += bits_diff & 1;
		bits_diff >>= 1;

	}

	return (bits_count);
}
