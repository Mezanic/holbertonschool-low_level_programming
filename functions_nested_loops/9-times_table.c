#include "main.h"

/**
 * times_table - print tablec multiplication
 *
 * Return: void
 */
void times_table(void)
{
	int counter1, counter2, result;

	for (counter1 = 0; counter1 <= 9; counter1++)
	{
		_putchar('0');

		for (counter2 = 1; counter2 <= 9; counter2++)
		{
			_putchar(',');
			_putchar(' ');
			result = counter1 * counter2;

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}

			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
