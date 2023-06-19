#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num1 = 0;
	int num2;

	while (num < 10)
	{
		num2 = 0
			while (num2 < 10)
			{
				if (num1 != num2 && num1 < num2)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');

					if (num1 != 56 || num2 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num2++;
			}
		num1++
	}
	putchar('\n');
	return (0);
}
