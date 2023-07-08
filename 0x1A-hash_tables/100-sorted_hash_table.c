#include "hash_tables.h"
char *shash_table_get(const shash_table_t *ht, const char *key);
/*int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);*/
/**
 * shash_table_create - create a sorted hash table;
 * @size: size of the sorted hash table
 * Return: a sorted hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *sht = (shash_table_t *) malloc(sizeof(shash_table_t));

	if (sht == NULL)
	{
		return (NULL);
	}
	sht->size = size;
	sht->array = (shash_node_t **) calloc(sht->size, sizeof(shash_node_t *));
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}
	sht->shead = NULL;
	sht->stail = NULL;
	for (i = 0; i < sht->size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);

}

/**
 * shash_table_set - set sorted hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_array;
	shash_node_t *latest_array;

	new_array = (shash_node_t *) malloc(sizeof(shash_node_t));
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
	new_array->next = ht->array[index];
	ht->array[index] = new_array;
	new_array->sprev = NULL;
	new_array->snext = latest_array;
	return (1);
}


/**
 * shash_table_get - gets value corresponding to a key in a hash table
 * @ht: hash table pointer
 * @key: key
 * Return: 0
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *checker;

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

/**
 * shash_table_print - func that prints hash table
 * @ht: hash table
 * Return: 0
 */
void shash_table_print(const shash_table_t *ht)
{
        unsigned long int h;
        shash_node_t *checker;
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


/**
 * shash_table_delete - deletes hash table and all content
 * @ht: hash table
 * Return: 0
 */
void shash_table_delete(shash_table_t *ht)
{
        unsigned long int j;
        shash_node_t *del_arr;

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

#include "hash_tables.h"
/**
 * hash_table_print - func that prints hash table
 * @ht: hash table
 * Return: 0
 */
void shash_table_print_rev(const shash_table_t *ht)
{
        unsigned long int h;
        shash_node_t *checker;
        int flag = 0;

        if (ht == NULL)
        {
                return;
        }
        printf("{");
        for (h = ht->size - 1; h > 0; h--)
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
