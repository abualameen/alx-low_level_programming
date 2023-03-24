#include "main.h"
/**
 * print_square - this function print squa shape
 * @size: function argument
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, m;

		for (l = 0; l < size; l++)
		{
			for (m = 0; m < size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
