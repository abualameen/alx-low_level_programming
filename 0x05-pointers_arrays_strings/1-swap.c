#include "main.h"
/**
 * swap_int - this function swap values of variables
 * @a: parameters of function
 * @b: parameter of function
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
