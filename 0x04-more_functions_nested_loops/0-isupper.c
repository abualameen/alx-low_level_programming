#include "main.h"

/**
 * _isupper -  checks for upper case
 * @c: function parameter
 * Return: ALways 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
