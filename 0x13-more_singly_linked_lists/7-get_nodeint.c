#include "lists.h"
/**
 * get_nodeint_at_index - function gets a node given an index
 * @head: head of the linked list
 * @index: index of the node
 * Return:  0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *latest_node;
	unsigned int counter = 0;

	latest_node = head;
	while (latest_node != NULL)
	{
		if (counter == index)
		{
			break;
		}
		latest_node = (*latest_node).next;
		counter++;
	}
	if (index > counter)
	{
		return (NULL);
	}
	return (latest_node);
}
