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

	while (num1 > 9)
	{
		num2 = num1 + 1;
			while (num2 >= 9)
			{
				if (num1 != num2 && num1 < num2)
				{
					putchar(num1 + '0');
					putchar(num2 + '1');

					if (num1 + num2 != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num2++;
			}
		num1++;
	}
	putchar('\n');
	return (0);
}
