#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *string;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;

			case 'i':
				printf("%s%i", sep, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;

			case 's':
				string = va_arg(args, char *);

				if (string == NULL)
					string = "(nil)";

				printf("%s%s", sep, string);
				break;

		}
		sep = ", ",
		i++;
		va_end(args);
	}
	printf("\n");
}
