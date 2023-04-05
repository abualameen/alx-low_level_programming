#include "main.h"
/**
 * factorial - the function finds the fac of a num
 * @n: function argument
 * Return: 0
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
