#include "main.h"
/**
 * print_alphabet_x10 - 'ten time alpha print function'
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int j;
	int k;

	for (k = 0; k <= 10; k++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
