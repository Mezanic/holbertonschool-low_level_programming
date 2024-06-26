#include "main.h"

/**
 * rev_string - print string and the reverse
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char temp[1000];
	int i = 0, j = 0, h = 0; 

	while (s[i] != 0)
	{
		i++;
	}	

	j = i - 1;

	for (h = 0; h < i; h++)
	{
		temp[h] = s[j];
		j--;

	}

}
