#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Description: If n is greater than 15 or less than 0, the function
 *              does not print anything.
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return;


	for (i = 0; i <= n; i++)
	{
		_putchar('0'); /* Print the first column */
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			result = i * j;
			if (result < 100)
				_putchar(' ');
			if (result < 10)
				_putchar(' ');
			if (result >= 100)
				_putchar((result / 100) + '0');
			if (result >= 10)
				_putchar(((result / 10) % 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
