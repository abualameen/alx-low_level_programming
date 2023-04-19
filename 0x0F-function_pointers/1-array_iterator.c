#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - the function executes another function
 * @array: argument
 * @size: argument
 * @action: argument
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}
