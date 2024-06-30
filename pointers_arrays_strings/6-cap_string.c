#include "main.h"

/**
 * cap_string -  capitalizes all words of a string.
 * @uwu: char
 *
 * Return: Char
 */

char *cap_string(char *uwu)
{
	int i = 0, j = 0;
	char arr[] = " !?(){},;.\"\t\n";


	for  (i = 0; uwu[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (uwu[i] >= 'a' && uwu[i] <= 'z')
			{
				uwu[i] = uwu[i] - 32;
			}
		}
		else
		{
			for (j = 0; arr[j]; j++)
			{
				if (uwu[i] == arr[j])
				{
					if (uwu[i + 1] >= 'a' && uwu[i + 1] <= 'z')
					{
						uwu[i + 1] = uwu[i + 1] - 32;
					}
				}
			}
		}
	}
	return (uwu);
}
