#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copy strin in newly allocated memory
 * @str: string
 *
 * Return: pointer to string or 0
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *st;


	if (str == 0)
		return (NULL);

	while (str[i] != 0)
		i++;

	st = malloc(sizeof(char) * (i + 1));

	if (st == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		st[i] = str[i];
	}

	st[i] = '\0';
	return (st);


}
