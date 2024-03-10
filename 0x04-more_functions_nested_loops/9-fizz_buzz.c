#include "main.h"

/**
 * main - Entry point
 *
 * Description: Function that prints "Fizz" for multiples of 3,
 *              "Buzz" for multiples of 5, and "FizzBuzz" for
 *              multiples of both 3 and 5, otherwise, it prints
 *              the number itself, from 1 to 100
 *
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", m);
		}
		if (m < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
