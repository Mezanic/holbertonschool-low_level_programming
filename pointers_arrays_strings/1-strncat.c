#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: string 1
 * @src: string 2
 * @n: number
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{

	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0 && n > j)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
