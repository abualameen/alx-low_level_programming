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
	char *comma = ", ";

	va_start(args, format);
	format_count = str_len(format);
	while (t < format_count)
	{
		switch (format[t])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c%s", c, comma);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d%s", i, comma);
				break;
				case 'f':
				f = va_arg(args, double);
				printf("%f%s", f, comma);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
				{
					printf("nil");
				}
				printf("%s", s);
				break;
			default:
				break;
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
