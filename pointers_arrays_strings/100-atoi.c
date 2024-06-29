#include "main.h"

/**
 * _atoi - convert a string to an intenger
 * @s: string
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int i = 0, n = 1;
	unsigned int r = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			n = n * -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			r = r * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		else if (r > 0)
		{
			break;
		}
		i++;
	}
	return (n * r);
}
