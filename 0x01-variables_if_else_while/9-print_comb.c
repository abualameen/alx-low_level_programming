#include <stdio.h>
/**
 * main - entry point
 * Description: 'numbers sep with comma'
 * Return: always 0
 */
int main(void)
{
	int t;

	for (t = 48; t <= 57; t++)
	{
		putchar(t);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
