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
	int cn;
	int a, b, c, d, e;

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
	a = cn % 25;
	b = cn % 10;
	c = cn % 5;
	d = cn % 2;
	e = cn % 1;
	printf("%d\n", c);
	printf("%d\n", cn / 5);
	if (cn >= 25 && cn >= 10 && cn >= 5 && cn >= 2 && cn >= 1)
	{
		if (cn / 25 + a < cn / 10 + b && cn / 10 + b < cn / 5 + c && cn / 5 + c < cn / 2 + d && cn / 2 + d < cn / 1 + e)
		{
			printf("%d\n", cn / 25 + a);
		}
	}
	else if (cn <= 25 || cn <= 10 || cn <= 5 || cn <= 2 || cn <= 1)
	{
		if (cn / 10 + b < cn / 5 + c && cn / 5 + c < cn / 2 + d && cn / 2 + d < cn / 1 + e)
		{
			printf("%d\n", cn / 10 + b);
		}
	}
	else if (cn <= 25 || cn <= 10 || cn <= 5 || cn <= 2 || cn <= 1)
	{
		if (cn / 5 + c < cn / 2 + d && cn / 2 + d < cn / 1 + e)
		{
			printf("%d\n", (cn / 5) + (c));
		}
	}
	else if (cn <= 25 || cn <= 10 || cn <= 5 || cn <= 2 || cn <= 1)
	{
		if (cn / 2 + d < cn / 1 + e)
		{
			printf("%d\n", cn / 2 + d);
		}
	}
	else if (cn <= 25 || cn <= 10 || cn <= 5 || cn <= 2 || cn <= 1)
	{
		printf("%d\n", cn / 1 + e);
	}
	return (0);
}
