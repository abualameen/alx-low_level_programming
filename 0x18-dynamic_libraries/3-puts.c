#include "main.h"
/**
 * _puts - print strings
 * @str: function parameter
 */

void _puts(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
