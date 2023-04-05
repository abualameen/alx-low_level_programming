#include "main.h"
/**
 * _print_rev_recursion - this function uses recursion to rev str
 * @s: argument
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
