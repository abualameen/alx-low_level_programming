#include "main.h"
int main_is_prime_number(int n, int j);

/**
 * is_prime_number - the function det if a num is prime
 * @n: function argument
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (main_is_prime_number(n, n - 1));
	}
}

/**
 * main_is_prime_number - function compute main prim num
 * @n: funct argu
 * @j: funct argu
 * Return: 0
 */

int main_is_prime_number(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	else if (n % j == 0 && j > 0)
	{
		return (0);
	}
	else
	{
		return (main_is_prime_number(n, j - 1));
	}
}
