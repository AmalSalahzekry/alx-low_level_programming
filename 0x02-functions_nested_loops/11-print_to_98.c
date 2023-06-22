#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, new line
 * @n: take the number from the function
 */

void print_to_98(int n)
{
	int num;

	if (n > 98)
		for (num = n; num > 98; num--)
		{
			printf("%i, ", num);
		}
	else
	for (num = n; num < 98; num++)
	{
	printf("%i, ", num);
	}
printf("98\n");
}
