#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: space puter
 * @n: number of str
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int t;
	char *r;

	va_start(args, n);
	for (t = 0; t < n; t++)
	{
		r = va_arg(args, char *);
		if (r == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", r);
			if (t < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
