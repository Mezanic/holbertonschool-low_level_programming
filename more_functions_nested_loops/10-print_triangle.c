#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int p, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (c = size; c > p; c--)
			{
				_putchar(' ');
			}

			for (c = 1; c <= p; c++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}

	}
	_putchar('\n');
}
