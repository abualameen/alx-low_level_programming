#include "search_algos.h"
void array_print(int *array, size_t start, size_t end);

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to serach in
 * @size: Number of element in the array
 * @value: Value to be searched for
 * Return: the indx of the value's location, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		array_print(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}

/**
 * array_print - Prints an array between two indices
 * @array: Pointer to the first element of the array
 * @start: Starting index
 * @end: Ending index
 */
void array_print(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}
