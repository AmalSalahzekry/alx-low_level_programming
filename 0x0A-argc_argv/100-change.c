#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 on sucess else 1
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int num;
		int changes = 0;
		int amount = atoi(argv[1]);
		int coins_value[] = {25, 10, 5, 2, 1};

		for (num = 0; num < 5; num++)
		{
			if (amount >= coins_value[num])
			{
				changes += amount / coins_value[num];
				amount = amount % coins_value[num];
				if (amount % coins_value[num] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", changes);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
