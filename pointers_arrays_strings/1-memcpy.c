#include "main.h"

/**
 * _memcpy - that copies memory area
 * @dest: destination
 * @src: source
 * @n: bytes from memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

        while (src[i] != 0 && i < n)
        {
                dest[i] = src[i];
                i++;
        }

        return (dest);
}
