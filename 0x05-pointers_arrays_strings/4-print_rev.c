#include "main.h"
/**
 * print_rev -  print str in reverse
 * @s: parameters of the function
 * Return: 0
 */

void print_rev(char *s)
{
	int g;
	int count;
	int f;

	for (g = 0; s[g] != '\0'; g++)
	{
		count++;
	}
	for (f = count; f >= 0; f--)
	{
		_putchar(s[f]);
	}
	_putchar('\n');
}
