#include "lists.h"
/**
 * dlistint_len - the fucntion returns numb of ele in a linked list
 * @h: rep head of the linked list
 * Return: numb of ele
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *latest = h;
	size_t counter = 0;

	while (latest != NULL)
	{
		counter++;
		latest = latest->next;
	}
	return (counter);
}
