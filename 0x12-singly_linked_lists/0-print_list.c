#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - print list element of list_t
 * @h:  argument
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *latest  = h;
	size_t counter = 0;
	
	while (latest)
	{
		if ((*latest).str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", (*latest).len, (*latest).str);
		}
		latest = (*latest).next;
		counter++;
	}
	return (counter);
}
