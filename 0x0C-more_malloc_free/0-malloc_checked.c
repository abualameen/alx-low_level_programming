#include "main.h"
#include <stdlib.h>
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
	if (ptr != NULL)
	{
		printf("Before exit...\n");
		return(ptr);
	}
	else if (ptr == NULL)
	{
		printf("After exit...\n");
		exit(98);
	}
	return (ptr);
}

