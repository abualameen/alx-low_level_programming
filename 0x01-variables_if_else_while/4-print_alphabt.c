#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print letter and ormmiting some'
 * Return: always 0
 */
int main(void)
{
	int t = 97;

	while (t <= 122)
	{
		if (t == 101 || t == 113)
		{
			t++;
			continue;
		}
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
