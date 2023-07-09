#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 on success, on Error return 1
 */

int main(int argc, char **argv)
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
