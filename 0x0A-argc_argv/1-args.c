#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	Printf("%d\n", argc - 1);
	return (0);
}
