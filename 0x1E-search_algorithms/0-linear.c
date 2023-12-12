#include "search_algos.h"

/**
 * linear_search - Searches foor a value in an array using linear search
 * @array: Pointer to the first element of the arr in the search space
 * @size: Num of ele in the array
 * @value: Value to be searvh for
 * Return: the first index of the value location or -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (array == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
		{
			return (k);
		}
	}
	return (-1);
}
