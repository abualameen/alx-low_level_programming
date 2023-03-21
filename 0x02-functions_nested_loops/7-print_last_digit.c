#include "main.h"
/**
 * print_last_digit - 'display last digit of a num'
 * @n: function param
 * Return: always k
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -(k);
	_putchar(k + '0');
	return (k);
}
