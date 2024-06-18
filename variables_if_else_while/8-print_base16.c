#include<stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	char num, alph;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	for (alph = 'a';  alph < 'g'; alph++)
	{
		putchar(alph);
	}

	putchar('\n');
	return (0);
}
