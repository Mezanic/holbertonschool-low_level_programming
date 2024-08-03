#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 char
 *
 * Return: converterd number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int convert_num = 0;

	if (b == NULL)
		return (0);

	while(b[i] != '\0')
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);

		convert_num = convert_num * 2 + (b[i] - '0');
		i++;
	}
	return (convert_num);
}
