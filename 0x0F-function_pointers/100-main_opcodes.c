#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: the number of arguments
 * @argv: the char of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char *c = (char *)main;
	int b;

	if (argc != 2)
		printf("Error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("Error\n"), exit(2);

	while (b--)
		printf("%02hhx%s", *c++, b ? " " : "\n");
	return (0);
}
