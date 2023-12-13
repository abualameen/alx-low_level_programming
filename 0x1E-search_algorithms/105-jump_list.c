#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted list
* @list: Pointer to the head of the list to search in
* @size: Number of nodes in the list
* @value: Value to search for
*
* Return: A pointer to the first node where value is located
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	size_t i;
	listint_t *current = list;
	listint_t *prev = NULL;

	step = sqrt(size);
	if (list == NULL)
		return (NULL);

	while (current && current->index < size && current->n < value)
	{
		prev = current;
		for (i = 0; current && i < step; ++i)
			current = current->next;

		if (current)
			printf("Value checked at index [%u] = [%d]\n",
				(unsigned int)current->index, current->n);
	}

	if (prev && current && current->index < size)
		printf("Value found between indexes [%u] and [%u]\n",
			(unsigned int)prev->index, (unsigned int)current->index);

	while (prev && prev->index < size)
	{
		printf("Value checked at index [%u] = [%d]\n",
			(unsigned int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
