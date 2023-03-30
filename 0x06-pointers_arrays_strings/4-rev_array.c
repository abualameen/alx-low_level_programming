#include "main.h"
/**
 * reverse_array - the function reverses the content of an arr
 * @a: argument
 * @n: argumrnt
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int t;
	int p;

	for (t = 0; t < n--; t++)
	{
		p = a[t];
		a[t] = a[n];
		a[n] = p;
	}
}
