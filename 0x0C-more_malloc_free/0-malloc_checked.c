#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: function argument representing the amount of memery
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	if (b == INT_MAX)
	{
		exit(98);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
