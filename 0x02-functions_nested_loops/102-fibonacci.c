#include <stdio.h>
#include "main.h"
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
	int i;

	printf("%ld, %ld, ", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;

		printf("%ld", next);

		if (i < 50)
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
