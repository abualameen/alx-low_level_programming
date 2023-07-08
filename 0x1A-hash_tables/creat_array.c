#include "hash_tables.h"
/**
 * create_array - this func create an array of key and value
 * @key: this is the key of the array
 * @value: this is the corresponding value to a key
 * Return: returns the created array
 */
hash_node_t *create_array(char *key, char *value)
{
	hash_node_t *array1 = (hash_node_t *) malloc(sizeof(hash_node_t));

	array1->key = (char *) malloc(strlen(key) + 1);
	array1->value = (char *) malloc(strlen(value) + 1);
	strcpy(arra1y->key, key);
	strcpy(array1->value, value);
	return (array1);
}
