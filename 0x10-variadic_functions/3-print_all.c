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
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	format_count = str_len(format);
	while (t < format_count)
	{
		if (format[t] == 'c')
		{
			c = va_arg(args, int);

			printf("%c, ", c);
		}
		else if (format[t] == 'i')
		{
			i = va_arg(args, int);

			printf("%d, ", i);
		}
		else if (format[t] == 'f')
		{
			f = va_arg(args, double);

			printf("%f, ", f);
		}
		else if (format[t] == 's')
		{
			s = va_arg(args, char *);

			printf("%s", s);
			if (s == NULL)
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
