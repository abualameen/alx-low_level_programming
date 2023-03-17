#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing of both up n lo case alpha char using charput'
 * Return: always 0
 */
int main(void)
{
	int w = 97;
	int p = 65;

	while (w <= 122)
	{
		putchar(w);
		w++;
	}
	while (p <= 90)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
