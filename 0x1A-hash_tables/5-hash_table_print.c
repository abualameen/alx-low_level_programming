#include "hash_tables.h"
/**
 * hash_table_print - func that prints hash table
 * @ht: hash table
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int h;
	hash_node_t *checker;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (h = 0; h < ht->size; h++)
	{
		checker = ht->array[h];
		while (checker != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s' : '%s'", checker->key, checker->value);
			flag = 1;
			checker = checker->next;
		}
	}
	printf("}\n");
}
