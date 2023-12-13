#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
void print_array(int *array, size_t low, size_t high);


/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		print_array(array, low, high);

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
			{
				return ((int)mid);
			}
			else
			{
				high = mid - 1;
			}
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
 * print_array - Prints the elements of an array
 * @array: Pointer to the first element of the array
 * @low: Starting index for printing
 * @high: Ending index for printing
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: %d", array[low]);
	for (i = low + 1; i <= high; ++i)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}
