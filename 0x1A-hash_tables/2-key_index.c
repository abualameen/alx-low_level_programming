#include "hash_tables.h"
/**
 * key_index - compute the indext of a hash table form the hash val
 * @key: this is the key of the array in the table
 * @size: this is the size of the hash table
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;
	unsigned long int indx;

	hash_val = hash_djb2(key);
	indx = hash_val % size;
	return (indx);
}
