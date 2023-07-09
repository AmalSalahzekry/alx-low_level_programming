#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 on success, on Error return 1
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num;
		int cent = 0;
		int amount = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (num = 0; num < 5; num++)
		{
			if (amount >= coins[num])
			{
				cent += amount / coins[num];
				amount = amount % coins[num];
				if (amount % coins[num] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", cent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

