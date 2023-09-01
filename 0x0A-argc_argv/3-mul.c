#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strangs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

