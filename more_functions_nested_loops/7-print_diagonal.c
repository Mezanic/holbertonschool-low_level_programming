#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: number
 *
 * Return : void
 */
void print_diagonal(int n)
{
	int l, sp;


	for (l = 1; l <= n; l++)
	{
		for (sp = 0; sp <= l; sp++)
		{
			if (sp == l)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}

		}
		_putchar('\n');
	}

}
