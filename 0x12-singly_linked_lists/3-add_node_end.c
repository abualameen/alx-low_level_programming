#include "lists.h"
int str_len(const char *f);
/**
 * add_node_end - add nodes to the start of list_t
 * @head: point to the pointer head
 * @str: string pointer
 * Return:  addr of the new ele
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *b_node;
	list_t *cur_last_node;

	if (str == NULL)
	{
		return (NULL);
	}
	b_node = malloc(sizeof(list_t));
	if (b_node == NULL)
	{
		return (NULL);
	}
	(*b_node).str = strdup(str);
	if ((*b_node).str == NULL)
	{
		free(b_node);
		return (NULL);
	}
	(*b_node).len = str_len(str);
	(*b_node).next = NULL;
	if (*head == NULL)
	{
		*head = b_node;
	}
	else
	{
		cur_last_node = *head;
		while ((*cur_last_node).next != NULL)
		{
			cur_last_node = (*cur_last_node).next;
		}
		(*cur_last_node).next = b_node;
	}
	return (b_node);
}

/**
* str_len - comput len of str
* @f: string
* Return: 0
*/
int str_len(const char *f)
{
	int e;
	int count = 0;

	for (e = 0; f[e] != '\0'; e++)
	{
		count++;
	}
	return (count);
}
