#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing of alpha char to std output'
 * Return: Always 0
 */
int main(void)
{
	int p = 97;

	while (p <= 122)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
