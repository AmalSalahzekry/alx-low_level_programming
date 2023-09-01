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
	int i;
	int m;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = i * m;

	printf("%d\n", mul);
	return (0);
}
