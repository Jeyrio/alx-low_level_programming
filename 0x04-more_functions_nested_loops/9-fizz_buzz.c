#include <stdio.h>

/**
 * main - Function that prints the numbers from 1 to 100 but
 * for multiples of 3 & 5 print Fizz Buzz
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit = 100;
	int i;

	for (i = 1; i <= limit; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
