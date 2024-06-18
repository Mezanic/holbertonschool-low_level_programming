#include<stdio.h>
/**
 * main - prints the alphabet in lowercase except q & e
 *
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
