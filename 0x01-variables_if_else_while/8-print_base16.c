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
	int num;
	char ch;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		ch = num + '0';

	else
		ch = num - 10 + 'a';
	}
		{
			putchar(ch);
		}
		{
			putchar('\n');
		}
		return (0);
}
