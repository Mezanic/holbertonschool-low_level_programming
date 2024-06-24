#include "main.h"

/**
 * print_square - prints a square
 * @size : size of square
 *
 * Return: void
 */
void print_square(int size)
{
	int l, sq;

	sq = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l < size; l++)
		{
			for (sq = 0; sq < size; sq++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
