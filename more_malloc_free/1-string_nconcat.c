#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 *
 * Return: Null or concate string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, h = 0;
	char *concatenates;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (s1 == 0 || s2 == 0)
		return (NULL);

	while (s1[i] != 0)
		i++;

	while (s2[j] != 0 && j < n)
		j++;

	concatenates = malloc(sizeof(char) * (i + n) + 1);

	if (concatenates == 0)
		return (NULL);
	for (h = 0; h < i; h++)
	{
		concatenates[h] = s1[h];
	}

	for (j = 0; j <= n; j++, h++)
	{
		concatenates[h] = s2[j];
	}

	concatenates[h] = 0;
	return (concatenates);
}

