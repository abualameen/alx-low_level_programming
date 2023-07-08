#include "hash_tables.h"
/**
 * free_array - frees arrays of a hash table
 * @array1: array to be freed
 * Return: 0
 */
void free_array(hash_node_t *array1)
{
	free(array1->key);
	free(array1->value);
	free(array1);
}
