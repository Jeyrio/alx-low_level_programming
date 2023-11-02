#include <stdio.h>
/**
 * main - Entry point
 *
 * 1 and 2, seperated by a comma
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;
	int n;

	printf("%lu, %lu, ", fib1, fib2);
	for (n = 3; n <= 90; n++)
	{
		next = fib1 + fib2;
		printf("%lu, ", next);
		fib1 = fib2;
		fib2 = next;
	}
	fib1_half1 = fib1 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (n = 91; n <= 98; n++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;

		if (half2 > 9999999999)
		{
			half1 = half1 + 1;
			half2 = half2 % 10000000000;
		}
		printf("%lu, %lu", half1, half2);
		if (n < 98)
		{
			printf(",");
		}
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
