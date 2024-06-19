#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: number
 * Return: the last digit of number
 */
int print_last_digit(int n)
{
	int last_digit = 0;

	if (n < 0)
	{
		last_digit = n % 10 * -1;
		_putchar('0' + n);
		return (n);
	}
	else
	{
		n = n % 10;
		_putchar('0' + n);
		return (n);
	}


}
