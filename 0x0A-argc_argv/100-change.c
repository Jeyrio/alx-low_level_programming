#include <stdio.h>
#include <stdlib.h>

/**
 * calculateMinimumCoins - Function to cal the minimum coins
 * @cents: The integer to be checked
 * Return: integer
 */
int calculateMinimumCoins(int cents)
{
	int coins25 = 0;
	int coins10 = 0;
	int coins5 = 0;
	int coins2 = 0;
	int coins1 = 0;
	int sum;

	coins25 = cents / 25;
	cents %= 25;
	coins10 = cents / 10;
	cents %= 10;
	coins5 = cents / 5;
	cents %= 5;
	coins2 = cents / 2;
	cents %= 2;
	coins1 = cents / 1;
	cents %= 1;

	sum = coins25 + coins10 + coins5 + coins2 + coins1;
	return (sum);
}

/**
 * main - Program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents;
	int minCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	minCoins = calculateMinimumCoins(cents);
	{
		printf("%d\n", minCoins);
	}

	return (0);
}
