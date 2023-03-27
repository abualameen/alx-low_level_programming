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

	for (g = 0; s[g] != '\0'; g++)
	{
		count++;
	}
	for (g = count; g >= 0; g--)
	{
		_putchar(s[g]);
	}
	_putchar('\n');
}
