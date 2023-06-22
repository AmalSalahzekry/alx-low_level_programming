#include "main"

/**
 * main - entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;
	int res;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			res += num;
	}
	printf("%i\n", res);
	return (0);
}
