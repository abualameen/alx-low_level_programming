#include <stdio.h>
/**
 * main - Entry point
 * Description: 'alhabet in reverse form'
 * Return: always 0
 */
int main(void)
{
	int t = 122;

	while (t >= 97)
	{
		putchar(t);
		t--;
	}
	putchar('\n');
	return (0);
}
