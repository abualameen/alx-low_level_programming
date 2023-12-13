#include "search_algos.h"
#include <math.h>

/**
 * jump_search - using jump search algorithm to search for a value
 * @array: Pointer to the first element of the array to be search in
 * @size: Number of elements in the array that is size of the array
 * @value: Value to be search for
 * Return: The first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    	size_t jump, prev, i;

	if (array == NULL)
	{
		return (-1);
	}

	jump = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (prev + jump >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, size - 1);
			break;
		}
		if (array[prev + jump] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + jump);
			break;
		}
		prev += jump;
	}
	for (i = prev; i <= size - 1 && i < prev + jump; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
