#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alpha exept 'e' and 'q'
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch == 'e' || ch == 'q')

		{
			ch++;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
