#include "main.h"
/**
 * print_line - drawing a line
 *
 * @n: function argument
 * Return: always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int g;

		for (g = 1; g <= n; g++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
