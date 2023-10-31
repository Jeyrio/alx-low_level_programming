#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int next;
	int sum = 2;

	while (1)
	{
		next = fib1 + fib2;

		if (next > 4000000)
		{
			break;
		}

		if (next % 2 == 0)
		{
			sum = sum + next;
		}

		fib1 = fib2;
		fib2 = next;
	}
	printf("%ld\n", sum);

	return (0);
}
