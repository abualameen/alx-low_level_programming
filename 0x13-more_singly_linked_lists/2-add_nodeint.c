#include "lists.h"
/**
 * add_nodeint - add new nodes at the begining of a list
 * @head: the head of the link list
 * @n:  int data
 * Return: addr
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
	{
		return (NULL);
	}
	(*node_new).n = n;
	(*node_new).next = *head;
	*head = node_new;
	return (node_new);
}
