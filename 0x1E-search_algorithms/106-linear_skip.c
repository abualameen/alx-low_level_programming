#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * linear_skip - Search for a value in a sorted skip list
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where the value is located, or NULL if
 * the value is not present in the list or if the head is NULL.
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express, *current;

	if (!list)
		return (NULL);

	express = list->express;

	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

		if (express->n >= value || express->express == NULL)
		{
			if (express->express == NULL)
				printf("Value found between indexes [%lu] and [%lu]\n",
			express->index, express->index);
			else
				printf("Value found between indexes [%lu] and [%lu]\n",
			list->index, express->index);

			current = express;
			while (current)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
				if (current->n == value)
					return (current);
				current = current->next;
			}
			break;
		}

		list = express;
		express = express->express;
	}

	return (NULL);
}
