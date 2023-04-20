#include "3-calc.h"
#include <stddef.h>


/**
 * op_add - perform addition
 * @a: argumetn
 * @b: argument
 * Return: 0
 */

int op_add(int a, int b)
{
	int t;

	t = a + b;
	return (t);
}

/**
 * op_sub - performs sub
 * @a: argument
 * @b: argurment
 * Return: 0
 */

int op_sub(int a, int b)
{
	int t;

	t = a - b;
	return (t);
}

/**
 * op_mul - performs mul
 * @a: argu
 * @b: argu
 * Return: 0
 */

int op_mul(int a, int b)
{
	int t;

	t = a * b;
	return (t);
}

/**
 * op_div - performs div
 * @a: argu
 * @b: argu
 * Return: 0
 */

int op_div(int a, int b)
{
	int t;

	t = a / b;
	return (t);
}

/**
 * op_mod - perform mod
 * @a: argu
 * @b: argu
 * Return: 0
 */

int op_mod(int a, int b)
{
	int t;

	t = a % b;
	return (t);
}
