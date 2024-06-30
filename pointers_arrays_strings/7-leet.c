#include "main.h"

/**
 * leet - encode a string to 1337
 * @s: the string
 *
 * Return: s
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{

		for (j = 0; num[j] != 0; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
