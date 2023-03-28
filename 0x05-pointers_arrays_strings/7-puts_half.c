#include "main.h"
/**
 * puts_half- this function prints half str
 *@str: function argument
 */

void puts_half(char *str)
{
	int t;
	int count = 0;
	int n;

	for (t = 0; str[t] != '\0'; t++)
	{
		count++;
	}
	for (n = (count) / 2; n < count; n++)
	{
		if (count % 2 != 0)
		{
			n = (count - 1) / 2;
		}
		_putchar(str[n]);
	}
	_putchar('\n');
}
