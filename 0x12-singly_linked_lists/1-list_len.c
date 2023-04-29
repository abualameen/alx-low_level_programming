#include "lists.h"
#include <stdio.h>
/**
 * list_len - print len element of list_t
 * @h:  pointer to the node
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		h = (*h).next;
		counter++;
	}
	return (counter);
}
