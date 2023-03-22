#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int m, n, a, q;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n < 10; n++)
		{
			a = m * (n);
			if (n == 0)
			{
				_putchar(a + '0');
			}
			if (a <= 9 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a > 9)
			{
				q = a % 10;
				while (a >= 10)
				{
					a /= 10;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(a + '0');
				_putchar(q + '0');
			}
		}
		_putchar('\n');
	}
}
