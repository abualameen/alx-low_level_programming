#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: head of the node
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *latest;
	dlistint_t *save;

	latest = head;
	while (latest != NULL)
	{
		save = latest->next;
		free(latest);
		latest = save;
	}
	head = NULL;
}
