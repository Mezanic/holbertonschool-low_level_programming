#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int r = 0, c = 0;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar (a[r][c]);

		}
		_putchar ('\n');
	}

}
