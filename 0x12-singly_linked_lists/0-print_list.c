#include "lists.h"
#include <stdio.h>
/**
 * print_list - print list element of list_t
 * @h:  argument
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		if ((*h).str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
		counter++;
	}
	return (counter);
}
