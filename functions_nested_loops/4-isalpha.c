#include "main.h"
/**
 * _isalpha - check if c is a lower or uppercase
 *
 * @c: characteri
 *
 * Return: 0
 */

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);

	}
	return (0);
}

