#include "main.h"
int main_sqrt_recursion(int n, float guess, float s_size);

/**
 * _sqrt_recursion - The function find the square root using recursion
 * @n: function argu
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (main_sqrt_recursion(n, 0, 1));
	}
}
/**
 * main_sqrt_recursion - The function find the square root using recursion
 * @n: function argu
 * @guess: function argument
 * @s_size: function argurment
 * Return: 0
 */

int main_sqrt_recursion(int n, float guess, float s_size)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		guess = guess + s_size;
		s_size = s_size;
		return (main_sqrt_recursion(n, guess, s_size));
	}
}
