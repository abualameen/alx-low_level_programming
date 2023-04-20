#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function adds all arguments
 * @n: number of argu
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int k;
	unsigned int t;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

	for (t = 0; t < n; t++)
	{
		k = va_arg(args, int);
		sum = sum + k;
	}
	va_end(args);
	return (sum);
}

