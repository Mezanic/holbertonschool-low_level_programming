#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: strinf 1
 * @s2: string 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != 0 || s2[j] != 0)
	{

		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		i++;
		j++;
	}
	return (0);
}
