#include "main.h"

/**
 * print_rev - pritn a string in reverse
 * @s: string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);

	}


	_putchar('\n');
}
