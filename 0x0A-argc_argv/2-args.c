#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
