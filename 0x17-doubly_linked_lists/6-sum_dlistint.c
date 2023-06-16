#include "lists.h"
/**
 * sum_dlistint - funct sun all data in dlinked list
 * @head: head of the node
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *latest;
	int numb;
	int summ = 0;

	if (head == NULL)
	{
		return (0);
	}
	latest = head;
	while (latest != NULL)
	{
		numb = latest->n;
		summ += numb;
		latest = latest->next;
	}
	return (summ);
}
