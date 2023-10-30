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
	long long fib1 = 1;
	long long fib2 = 2
	long long next;
	int i;
	
	printf("%lld, %lld, , ", fib1, fib2);
	
	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;

		printf("%lld", next);
		
		if (i < 50)
		{
			printf(", ", i);
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
