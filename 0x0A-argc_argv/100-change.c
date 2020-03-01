#include <stdio.h>
#include <stdlib.h>
/**
 *main - calculates the shortest change for a series of coins
 *@argc: Quantity of arguments
 *@argv: Arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0, change, coins [] = {25, 10, 5, 2, 1};
	int max = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		if (change < 0)
		{
			printf("0\n");
			return (0);
		}
		while (change != 0)
		{
			if (change >= coins[max])
			{
				result++;
				change = change - coins[max];
			}
			else
			{
				max++;
			}
		}
		printf("%d\n", result);
		return (0);
	}
}
