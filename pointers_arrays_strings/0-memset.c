#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: area
 * @b: constant byte
 * @n: number
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;


	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}


	return (s);
}
