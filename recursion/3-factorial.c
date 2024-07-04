#include "main.h"

/**
 * factorial - returns the factorial of given number
 * @n: number we ned to check
 *
 * Return: factorial of given number
 */

int factorial(int n)
{

	if (n >= 0)
	{
		if (n == 0)
		{
			return (1);
		}
		return (n  * factorial(n - 1));
	}

	return (-1);
}
