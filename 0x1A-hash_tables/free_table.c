#include "hash_tables.h"
/**
 * free_table - free all dynamically allocated memories
 * @table: pointer to the table
 * Return: 0
 */


void free_table(hash_table_t *table)
{
	unsigned long int j;
	hash_node_t *rray1;

	for (j = 0; j < table->size; j++)
	{
		array1 = table->array[j];
		if (array1 != NULL)
			free_array1(array1);
	}
	free(table->arrays;
	free(table);
}
