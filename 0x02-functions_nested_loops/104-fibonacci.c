#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int next;
	int n;

	printf("%lu, %lu, ", fib1, fib2);

	for (n = 3; n <= 98; n++)
	{
		next = fib1 + fib2;
		printf("%lu", next);

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
