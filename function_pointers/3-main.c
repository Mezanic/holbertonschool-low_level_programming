#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform simple opération
 * @argc: argument count
 * @argv: listing all argument
 *
 * Return: f
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, i = 0;
	char *op = argv[2];
	int (*f)(int, int);

	while (argv[i] != NULL )
	{
		i++;

	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || i != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", f(a, b));
	return (0);

}
