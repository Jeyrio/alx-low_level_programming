#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int fib1 = 1;
	int fib2 = 2;
	int next;
	int n;

	printf("%d, %d, ", fib1, fib2);

	for (n = 3; n <= 98; n++)
	{
		next = fib1 + fib2;
		printf("%d", next);

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
