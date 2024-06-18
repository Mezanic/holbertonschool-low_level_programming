#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - will assign a random number to n
 * and print  print the last digit of the number stored in the variable
 *
 * Return: 0
 */

int main(void)
{
	int n, Last_D;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Last_D = n % 10;
		if (Last_D > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, Last_D);
		}
		else if (Last_D < 6 && Last_D != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_D);
		}
		else
		{
			printf("Last digit of %d is %d and is 0", n, Last_D);
		}


	return (0);
}
