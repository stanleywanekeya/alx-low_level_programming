#include "hash_tables.h"

/**
 * hash_table_create - creates hash tables
 * @size: size of the hash table
 * Return: value of the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *table;
	hash_node_t **array;

	table = (hash_table_t *)calloc(table->size, sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	array = (hash_node_t *)calloc(table->size, sizeof(hash_node_t *));
	if (!table)
	{
		return (NULL);
	}
	for (i = 0; i < table->size; ++i)
		table->array[i] = NULL;
	return (NULL);
}
