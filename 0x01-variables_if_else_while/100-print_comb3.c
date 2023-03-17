#include <stdio.h>
/**
 * main - entry point of code
 * Description: 'two digit generation with some conditions'
 * Remove: always 0
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m < 10; m++)
	{
		for (n = 1; n < 10; n++)
		{
			if (m < n && m != n)
			{
				putchar(m + '0');
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
