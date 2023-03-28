#include "main.h"
/**
 * puts2 - this function strings in an order
 * @str: function argument
 */

void puts2(char *str)
{
	int p;
	int count = 0;
	int d;

	for (p = 0; str[p] != '\0'; p++)
	{
		count++;
	}
	for (d = 0; d < count; d++)
	{
		_putchar(str[d++]);
	}
	_putchar('\n');

}
