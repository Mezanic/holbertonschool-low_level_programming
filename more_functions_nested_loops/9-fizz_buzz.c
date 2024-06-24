#include "main.h"
#include <stdio.h>

/**
 * main - check multiple of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		printf(" ");

		if ((n % 3) == 0 && (n % 5) != 0)
		{
			printf("Fizz");
		}

		else if ((n % 5) == 0 && (n % 3) != 0)
		{
			printf("Buzz");
		}

		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", n);
		}

	}
	printf("\n");
	return (0);
}
