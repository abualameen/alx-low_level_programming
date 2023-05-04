#include "main.h"
/**
 * print_binary - prints bin of a num
 * @n: numb
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int wen;
	int y_no = 0;

	wen = 1UL << 63;
	while (wen > 0)
	{
		if ((n & wen) == wen)
		{
			_putchar('1');
			y_no = 1;
		}
		else if (y_no)
		{
			_putchar('0');
		}
		wen >>= 1;
	}
	if (!y_no)
	{
		_putchar('0');
	}
}
