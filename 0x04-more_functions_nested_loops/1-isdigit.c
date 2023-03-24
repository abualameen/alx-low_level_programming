#include "main.h"
/**
 * _isdigit - function to check for digits
 * @c: function argument
 * Return: always 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
