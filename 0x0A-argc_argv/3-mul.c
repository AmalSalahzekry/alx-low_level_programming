#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strangs
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = _atoi(argv[1]) * _atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

