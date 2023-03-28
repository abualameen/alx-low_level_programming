#include "main.h"
#include <stdio.h>
/**
 * print_array- this function print ele of arr
 * @a: function param
 * @n: function argument
 */

void print_array(int *a, int n)
{
	int g;
	int p;

	for (p = 0; p < n - 1; p++)
	{
		printf("%d, ", a[p]);
	}
	for (g = p; g < n; g++)
	{
		printf("%d", a[g]);
	}
	printf("\n");
}
