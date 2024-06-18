#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	for (num; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);
}
