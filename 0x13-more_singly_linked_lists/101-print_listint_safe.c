#include "lists.h"
/**
 * print_listint_safe - prints linked list struc
 * @head: pointer to the head node
 * Return: 0
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *store_node;
	size_t counter = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		counter++;
		store_node = head;
		head = (*head).next;
		if (store_node <= head)
		{
			printf("-> [%p] %d\n", (void *)head, (*head).n);
			exit(98);
		}
	}
	return (counter);
}
