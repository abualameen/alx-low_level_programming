#include "main.h"
/**
 * print_diagonal - printing diagonal
 * @n: function argument
 * Return: always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, o;

		for (m = 0; m < n; m++)
		{
			for (o = 0; o < n; o++)
			{
				if (o == m)
				{
					_putchar('\\');
				}
				else if (o < m)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
