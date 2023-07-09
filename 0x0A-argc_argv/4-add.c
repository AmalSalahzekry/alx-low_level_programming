#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, on Error return 1
 */

int main(int argc, char **argv)
{
	int sum = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum  += atoi(argv[argc]);
	}
	printf("%d\n", sum);

	return (0);
}
