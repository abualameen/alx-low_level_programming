#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: function argument representing the amount of memery
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else if (ptr != NULL)
	{
		return (ptr);
	}
	return (ptr);
}

