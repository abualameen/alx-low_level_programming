#include "lists.h"
/**
 * delete_nodeint_at_index - delete based on index
 * @head: pointer to the head
 * @index: index of the noded to be del
 * Return: 0
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *latest_node;
	listint_t *passed_node;
	unsigned int i = 0;

	latest_node = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*latest_node).next;
		free(latest_node);
		return (1);
	}
	while (i < index && latest_node != NULL)
	{
		passed_node = latest_node;
		latest_node = (*latest_node).next;
		i++;
	}
	if (latest_node == NULL)
	{
		return (-1);
	}
	(*passed_node).next = (*latest_node).next;
	free(latest_node);
	return (1);
}
