#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
        unsigned long fib1 = 1;
        unsigned long fib2 = 2;
        unsigned long next;
        unsigned long fib1_half1, fib1_half2;
        unsigned long fib2_half1, fib2_half2;
        int n;


        for (n = 3; n < 90; n++)
        {
                next = fib1 + fib2;

                printf("%lu", next);

                if (n <= 90)
                {
                        printf(", ");
                }

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

                printf("%lu, %lu",half1, half2);

                if(n < 98)
                {
                        printf(",");
                }
                else
                {
                        printf("\n"):
                }

                fib1_half1 = fib2_half1;
                fib1_half2 = fib2_half2;
                fib2_half1 = half1;
                fib2_half2 = half2;
	}
	return(0);
}
