#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all parameter
 * @n: number of arg
 *
 * Return: sum of parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	va_start(args, n);

	if (n == 0)
		return (0);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);

	}
	va_end(args);
	return (sum);

}
