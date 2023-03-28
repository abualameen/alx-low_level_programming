#include "main.h"
/**
 * print_rev -  print str in reverse
 * @s: parameters of the function
 * Return: always 0
 */

void print_rev(char *s)
{
	int g;
	int count = 0;
	int p;

	for (g = 0; s[g] != '\0'; g++)
	{
		count++;
	}
	for (p = count; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
