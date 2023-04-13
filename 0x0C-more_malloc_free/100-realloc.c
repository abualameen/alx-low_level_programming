#include "main.h"
#include <stdlib.h>
/**
 * _realloc - the function reallocates memory block
 * @ptr: argu
 * @old_size: argu
 * @new_size: argu
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;
	unsigned int k;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr_new = malloc(new_size);
		return (ptr_new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = malloc(new_size);
	if (ptr_new != NULL)
	{
		for (k = 0; k < old_size && k < new_size; k++)
		{
			*((char *) ptr_new + 1) = *((char *) ptr + 1);
		}
	}
	free(ptr);
	return (ptr_new);
}
