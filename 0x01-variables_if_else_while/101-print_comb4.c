#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing three digits'
 * Return: always 0
 */
int main(void)
{
	int m;
	int n;
	int p;

	for (m = 0; m < 10; m++)
	{
		for (n = 1; n < 10; n++)
		{
			for (p = 2; p < 10; p++)
			{
				if (m < n && n < p && m != n && n != p && m != p)
				{
					putchar(m + '0');
					putchar(n + '0');
					putchar(p + '0');
					if (m == 7 && n == 8 && p == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
