#include <stdio.h>
#include <stdlib.h>
int exponential_search(int *array, size_t size, int value);

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @low: Starting index for the search
 * @high: Ending index for the search
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search(int *array, size_t low, size_t high, int value)
{
	while (low <= high)
	{
		size_t mid;
		size_t i;

		mid = (low + high) / 2;
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; ++i)
		{
			printf(", %d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	int high;
	int low;

	bound = 1;
	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	if (bound < size)
	{
		high = bound;
	}
	else
	{
		high = size - 1;
	}

	low = bound / 2;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	return (binary_search(array, low, high, value));
}
