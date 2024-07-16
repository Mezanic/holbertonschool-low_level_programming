#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform simple opération
 * @argc: argument count
 * @argv: listing all argument
 * Return: number
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	char *op = argv[2];
	int (*f)(int, int);


     if (argc != 3)
        {
                printf("Error\n");
                exit(98);
        }

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a,b));
	return (0);

}
