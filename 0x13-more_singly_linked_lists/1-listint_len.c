#include "lists.h"
/**
 * listint_len - print all ele of a list
 * @h: pointer
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *latest;
	size_t counter = 0;

	latest = h;
	while (latest != NULL)
	{
		latest = (*latest).next;
		counter++;
	}
	return (counter);
}
