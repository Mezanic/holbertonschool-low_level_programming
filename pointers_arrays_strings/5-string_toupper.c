#include "main.h"

/**
 * string_toupper - change lowercase letters of a string to uppercase.
 * @u: char
 *
 * Return: u
 */

char *string_toupper(char *u)
{
	int i = 0;

	for (i = 0; u[i] != 0; i++)
	{
		if (u[i] >= 'a' && u[i] <= 'z')
		{
			u[i] = u[i] - 32;
		}
	}
	return (u);
}
