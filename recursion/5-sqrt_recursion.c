#include "main.h"

/**
 * _sqrt_recursion - return natural square root
 * @n: number we nned to return natural square
 *
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_r(n, 0));
	}
}

/**
 *  _sqrt_r - return natural square root
 * @n: we number ned to return natural square
 * @i: find the square
 *
 * Return: i or -1
 */

int _sqrt_r(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_r(n, i + 1));
	}
}
