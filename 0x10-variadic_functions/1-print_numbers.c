#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - the function prints numbers using arg list
 * @separator: space btw numbers
 * @n: numbers of int passed
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int t;
	unsigned int x;
	
	va_start(args, n);
	for (t = 0; t < n; t++)
	{
		x = va_arg(args, int);
		printf("%d" , x);
		if (t < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
