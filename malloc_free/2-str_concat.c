#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -  concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0 or s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, h = 0;
	char *concatenates;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (s1 == 0 || s2 == 0)
		return (NULL);

	while (s1[i] != 0)
		i++;

	while (s2[j] != 0)
		j++;

	concatenates = malloc(sizeof(char) * (i + j) + 1);

	if (concatenates == 0)
		return (NULL);
	for (h = 0; h < i; h++)
	{
		concatenates[h] = s1[h];
	}

	for (j = 0; s2[j] != 0; j++, h++)
	{
		concatenates[h] = s2[j];
	}
	return (concatenates);
}
