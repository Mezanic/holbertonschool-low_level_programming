#include "main.h"
#include <string.h>
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

	while (haystack[i] != 0)
	{
		while (needle[j] != 0)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}

	return (0);
}
