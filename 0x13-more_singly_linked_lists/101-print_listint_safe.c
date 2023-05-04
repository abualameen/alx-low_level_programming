#include "lists.h"
const listint_t *floyd_algo(const listint_t *head);
size_t cont_pri(const listint_t *head, const listint_t *entry_pt);
size_t wen_no_lop(const listint_t *head);

/**
 * print_listint_safe - prints linked list struc
 * @head: pointer to the head node
 * Return: 0
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *entry_pt;
	size_t counter = 0;
	size_t c;
	size_t c1;

	entry_pt = floyd_algo(head);
	if (!entry_pt)
	{
		c1 = wen_no_lop(head);
		return (c1);
	}
	else if (entry_pt)
	{
		while (head != entry_pt)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
			counter++;
			head = head->next;
		}
		printf("[%p] %d\n", (void *)entry_pt, (*entry_pt).n);
		counter++;
		head = head->next;
		c = cont_pri(head, entry_pt);
	}
	return (counter + c);
}


/**
 * floyd_algo - detects if there is loop in linked list
 * @head: pointer to the head node
 * Return: 0
 */

const listint_t *floyd_algo(const listint_t *head)
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
			break;
		}
	}
	if (fast == NULL || fast->next == NULL)
	{
		return (NULL);
	}
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}


/**
 * cont_pri - prints
 * @head: head ptr
 * @entry_pt: entry pt
 * Return: 0
 */
size_t cont_pri(const listint_t *head, const listint_t *entry_pt)
{
	size_t counter = 0;

	while (head != entry_pt)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		counter++;
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)entry_pt, (*entry_pt).n);
	return (counter);
}

/**
 * wen_no_lop - finds the start node in a loop
 * @head: pointer to the slow
 * Return: 0
 */
size_t wen_no_lop(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		count++;
		head = (*head).next;
	}
	return (count);
}
