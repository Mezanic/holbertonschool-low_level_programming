#include"main.h"

/**
 * main - prints the alphabet, in lowercase
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet(void);
	int alph;

	for (alph = 'a'; alph <= 'Z'; alph++)
	{
		_putchar(alph);
	}

	_putchar('\n');
	return (0);
}
