#include "hash_tables.h"
/**
 * hash_table_get - gets value corresponding to a key in a hash table
 * @ht: hash table pointer
 * @key: key
 * Return: 0
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *checker;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	checker = ht->array[index];
	while (checker != NULL)
	{
		if (strcmp(checker->key, key) == 0)
		{
			return (checker->value);
		}
		checker = checker->next;
	}
	return (NULL);
}
