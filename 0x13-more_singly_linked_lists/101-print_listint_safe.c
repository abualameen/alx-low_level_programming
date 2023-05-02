#include "lists.h"
size_t floyd_algo(const listint_t *head);
/**
 * print_listint_safe - prints linked list struc
 * @head: pointer to the head node
 * Return: 0
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		counter++;
		if (floyd_algo(head))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}
	return (counter);
}


/**
 * floyd_algo - detects if there is loop in linked list
 * @head: pointer to the head node
 * Return: 0
 */

size_t floyd_algo(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;

	slow = head;
	fast = head;
	while (fast != NULL && (*fast).next != NULL)
	{
		slow = (*slow).next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}
