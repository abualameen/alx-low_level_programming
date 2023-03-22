#include "main.h"
/**
 * times_table - nine times table
 * Return: void
 */
void times_table(void)
{
	int m, a, n, p, q;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n < 10; n++)
		{
			a = m * (n);
			if (a <= 9)
			{
				_putchar(a + '0');
				if (n == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				q = a % 10;
				while (a >= 10)
				{
					a /= 10;
				}
				_putchar(a + '0');
				_putchar( q + '0');
				if (n == 9)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			if (m == 2 && n == 4 || m == 3 && n == 3 || m == 4 && n == 2 || m == 5 && n == 1 || m == 6 && n == 1 || m == 7 && n == 1 || m == 8 && n == 1 || m == 9 && n == 1)
		{
			_putchar('\b');
		}
		}
		_putchar('\n');
	}
}
