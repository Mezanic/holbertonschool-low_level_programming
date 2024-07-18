#include "variadic_functions.h"

/**
 * print_numbers -  print number
 * @separator: string to be printed
 * @n: number
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num = 0;
	va_list args;

	if (n == 0)
		return;
	
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		
		printf("%d", num);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);


	}
	printf("\n");
	va_end(args);

}
