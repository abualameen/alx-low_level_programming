#include "hash_tables.h"
/**
 * free_table - free all dynamically allocated memories
 * @table: pointer to the table
 * Return: 0
 */


void free_table(hash_table_t *table)
{
	unsigned long int j;
	hash_node_t* arra;
	
	/*for (j = 0; j < table->size; j++)
	{
		arra = table->array[j];
		if(arra != NULL)
			free_item(arra);	
	}*/
	free(table->arrays;
	free(table);
}
