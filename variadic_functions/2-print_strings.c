#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			string = "(nil)";

		printf("%s", string);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);


	}
	printf("\n");
	va_end(args);

}
