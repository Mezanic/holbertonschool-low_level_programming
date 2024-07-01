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
	int result = -1;

	while (s[i] != 0)
	{
		if (result >= j)
		{
			break;
		}
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				result += 1;
			}
		}

		i++;
	}
	return (result + 1);
}
