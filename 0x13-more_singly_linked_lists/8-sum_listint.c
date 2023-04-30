#include "lists.h"
/**
 * sum_listint - sums the node data values
 * @head: pointer to the head
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	listint_t *latest_node;
	int val = 0;

	if (head == NULL)
	{
		return (0);
	}
	latest_node = head;
	while (latest_node != NULL)
	{
		val = val + (*latest_node).n;
		latest_node = (*latest_node).next;
	}
	return (val);
}
