#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: primodial string
 * @needle: secondary string
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	if (needle[j] == '\0')
	{
		return (haystack);
	}
	for  (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;

			}
		}
	if (needle[j] == '\0')
	{
		return (&haystack[i]);
	}
	}
	return (0);
}
