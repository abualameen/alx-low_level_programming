#include "main.h"
/**
 *   main - Entry point to code
 *   Description: ' print alphabet using a function'
 *   Return: always 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
