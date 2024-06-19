#include"main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: 0
 */

print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
	return (0);
}
