#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes we need 
 *
 * Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while ( s[i] != 0)
		i++;

	while (accept[j] != 0)
		j++;

	return ( j + 1);	
}
