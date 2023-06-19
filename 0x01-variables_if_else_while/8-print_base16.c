#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 48;

		while (num < 103)
		{
			putchar(num);

			if (num == 57)
				num += 39;
			num++;
		}
	Putchar('\n');
		return (0);
}
