#include <stdio.h>

/**
 * main - entry point. Prints all possible combinations of three digits
 *
 * Description: print all possible combinations.
 *
 * Return: 0 (success)
*/

int main(void)

{
	int num1, num2, num3;

	num1 = 0;

	while (num1 < 8)
	{
		num2 = num1 + 1;

		while (num2 < 9)
		{
			num3 = num2 + 1;

			while (num3 < 10)
			{
				if (num1 != num2 && num1 < num2 && num2 != num3 && num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
