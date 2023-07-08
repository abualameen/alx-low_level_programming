#include "hash_tables.h"
int supb(void);
/**
 * hash_table_set - sets hash table
 * @ht: hash table
 * @key: key of the array
 * @value: value of the key
 * Return: 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_array;
	hash_node_t *latest_array;

	new_array = (hash_node_t *) malloc(sizeof(hash_node_t));
	new_array->key = (char *) malloc(strlen(key) + 1);
	new_array->value = (char *) malloc(strlen(value) + 1);
	if (new_array == NULL || new_array->key == NULL || new_array->value == NULL)
	{
		return (0);
	}
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	latest_array = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	latest_array = ht->array[index];
	while (latest_array != NULL)
	{
		if (strcmp(latest_array->key, key) == 0)
		{
			free(latest_array->value);
			latest_array->value = strdup(value);
			if (latest_array->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		latest_array = latest_array->next;
	}
	strcpy(new_array->key, key);
	strcpy(new_array->value, value);
	if (new_array == NULL)
	{
		return (0);
	}
	new_array->next = ht->array[index];
	ht->array[index] = new_array;
	return (1);
}

/**
 * supb - supressses
 * Return: 0
 */
int supb(void)
{
	return (0);
}
