#include "main.h"
/**
 * jack_bauer - 'longest task to be print'
 * Return: void
 */
void jack_bauer(void)
{
	int m;
	int n;
	int o;
	int p;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					if (m >= 2 && n >= 4)
						break;
					_putchar(m + 48);
					_putchar(n + 48);
					_putchar(58);
					_putchar(o + 48);
					_putchar(p + 48);
					_putchar('\n');
				}
			}
		}
	}
}
