#include <stdio.h>
/**
 * main - Entry point of code
 * Description: 'Two digit generation with some conditions'
 * Return: always 0
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
				if (m == 8 && n == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
