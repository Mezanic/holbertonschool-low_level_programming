#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c : character
 *
 * Return: c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}

	if (c == '\0')
	{
		return (s + i);
	}
	else 
	{
	return (s + i);
	}
}
