#include "main.h"

/**
 * more_numbers- fucntion that print numbers 10 times
 *Return: always 0
 */

void more_numbers(void)
{
	int f, g;

	for (f = 0; f <= 9; f++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
			{
				_putchar('1');
			}
			_putchar(g % 10 + '0');
		}
		_putchar('\n');
	}
}
