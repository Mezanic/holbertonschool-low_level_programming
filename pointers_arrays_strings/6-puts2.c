#include "main.h"

/**
 * puts2 - every other character of a string
 * @str: number
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
