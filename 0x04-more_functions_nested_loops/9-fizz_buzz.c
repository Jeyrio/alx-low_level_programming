#include <stdio.h>

/**
 * print_fizz_buzz - Prints the numbers from 1 to 100 and
 * for multiples of 3 & 5 print Fizz Buzz
 *
 * @limit: The integer to be checked
 *
 */
void print_fizz_buzz(int limit)
{
	int i;

	for (i = 1; i <= limit; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int limit = 100;

	print_fizz_buzz(limit);

	return (0);
}
