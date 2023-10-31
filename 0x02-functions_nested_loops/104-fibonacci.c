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
	int n;

	printf("%ld, %ld, ", fib1, fib2);

	next = fib1 + fib2;

	for (n = 3; n <= 98; n++)
	{
		next = fib1 + fib2;
		printf("%ld", next);

		if (n < 98)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		fib1 = fib2;
		fib2 = next;
	}
	return (0);
}
