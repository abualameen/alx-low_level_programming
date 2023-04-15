#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: function argument representing the amount of memery
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (b == INT_MAX)
	{
		exit(98);
	}
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}



