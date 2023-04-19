#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - the function finds the index of an array
 * @array: argument
 * @size: argument
 * @cmp: argument pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int t;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (t = 0; t < size; t++)
	{
		if (cmp(array[t]) != 0)
		{
			return (t);
		}
	}
	return (-1);
}
