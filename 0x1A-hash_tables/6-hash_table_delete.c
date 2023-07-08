#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table and all content
 * @ht: hash table
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *del_arr;

	for (j = 0; j < ht->size; j++)
	{
		del_arr = ht->array[j];
		if (del_arr != NULL)
		{
			free(del_arr->key);
			free(del_arr->value);
			free(del_arr);
		}
	}
	free(ht->array);
	free(ht);
}
