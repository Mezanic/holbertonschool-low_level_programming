#include "main.h"

/**
 * _strcpy - copies the string pointed
 * @dest: pointer char
 * @src: pointer char
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] >= 0; i++)
	{
		dest[i] = src[i];

	}
	return (dest);
}

