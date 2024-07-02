#include "main.h"

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

	for  (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != 0 && haystack [i +j] == needle[j])
				{ 
					return (haystack + i);

				}	
			}
		}
	}
	if (needle[j] == '\0')
	{
		return (haystack + i);
	}

	return (0);
}
