#include "lists.h"
size_t num_node(const listint_t **head);
/**
 * pop_listint - the function deletes delists node and return data
 * @head: pointer to the head node
 * Return: data in in the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *latest_node;
	listint_t *old_head;
	int val;

	latest_node = *head;
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		val = (*latest_node).n;
		old_head = *head;
		*head = (*latest_node).next;
		free(old_head);
	}
	return (val);
}
