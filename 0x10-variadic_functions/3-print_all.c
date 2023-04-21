#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
int str_len(const char * const str);
/**
 * print_all - print all type of type
 * @format: format types to be printed
 * Return: always 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int format_count;
	int t = 0;

	va_start(args, format);

	format_count = str_len(format);
	while (t < format_count)
	{
		if (format[t] == 'c')
		{
			char g = va_arg(args, int);

			printf("%c, ", g);
		}
		else if (format[t] == 'i')
		{
			int g = va_arg(args, int);

			printf("%d, ", g);
		}
		else if (format[t] == 'f')
		{
			double g = va_arg(args, double);

			printf("%f, ", g);
		}
		else if (format[t] == 's')
		{
			char *g = va_arg(args, char *);

			printf("%s", g);
			if (g == NULL)
			{
				printf("nil");
			}
		}
		t++;
	}
	va_end(args);
	printf("\n");
}

/**
 * str_len - finds the str_len of a format
 * @str: argument
 * Return: 0
 */

int str_len(const char * const str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
