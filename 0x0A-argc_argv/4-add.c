#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: Number of arguments
 * @argv: array of strings
 * Return: 0 on sucess else 1
 */

int main(int argc, char *argv[])
{
	int res = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}

