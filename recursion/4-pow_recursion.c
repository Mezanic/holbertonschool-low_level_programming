#include "main.h"

/**
 * _pow_recursion - returns the value raised the power of y
 * @x: value to return
 * @y: power to raise x
 *
 * Return: -1 or value of x raised by y
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);

		return (_pow_recursion(x, y - 1) * x);
	}

	return (-1);

}
