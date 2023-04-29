#include "lists.h"
/**
 * print_listint - print all ele of a list
 * @h: pointer
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *latest;
	size_t counter = 0;

	latest = h;
	while (latest != NULL)
	{
		printf("%d\n", (*latest).n);
		latest = (*latest).next;
		counter++;
	}
	return (counter);
}

