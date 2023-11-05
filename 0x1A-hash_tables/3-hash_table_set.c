#include "hash_tables.h"

/**
 * hash_table_set - sets item to hash table
 * @ht: the hash table
 * @key: maps key to the hash table
 * @value: maps the value to the key
 * Return: 1 if success and 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; ++i)
	{
		if (strcmp(ht->array[i], key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
