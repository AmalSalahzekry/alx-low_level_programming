#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strangs
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int mul = num1 * num2;
		printf("%d\n", sum);
	}
	return (0);
}

