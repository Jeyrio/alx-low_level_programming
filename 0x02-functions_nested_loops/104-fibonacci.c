#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	unsigned int next;
	int n;

	printf("%u, %u, ", fib1, fib2);

	for (n = 3; n <= 98; n++)
	{
		next = fib1 + fib2;
		printf("%u", next);

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
