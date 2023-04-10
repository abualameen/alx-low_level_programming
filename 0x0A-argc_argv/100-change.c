#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- the prog mult two num by comman line argu
 * @argc: argu count
 * @argv: argu vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_coins = 0, cents;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (*argv[argc - 1] < 0)
	{
		printf("%d\n", 0);
	}
	cents = atoi(argv[argc - 1]);
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			num_coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			num_coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			num_coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			num_coins++;
		}
		else
		{
			cents -= 1;
			num_coins++;
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
