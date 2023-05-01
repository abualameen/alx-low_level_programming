#include "lists.h"
/**
 * reverse_listint - function reverses a linked list
 * @head: point to the head node
 * Return: 0
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tail_node;
	listint_t *store_next_node;

	tail_node = NULL;
	store_next_node = NULL;
	while (*head != NULL)
	{
		store_next_node = (*head)->next;
		(*head)->next = tail_node;
		tail_node = *head;
		*head = store_next_node;
	}
	*head = tail_node;
	return (*head);
}
