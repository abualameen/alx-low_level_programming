#include "main.h"
/**
 * _pow_recursion - the function finds exponential
 * @x: funtion aurgu
 * @y: funttion argu
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y != 0 || x < 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
