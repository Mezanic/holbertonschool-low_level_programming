#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for my program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if two nulber , 1 If the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);
	return (0);


}
