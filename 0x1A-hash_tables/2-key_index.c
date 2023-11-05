#include "hash_tables.h"

/**
 * key_index - finds the index for the hash table
 * @key: key to map to the hash table
 * @size: size of the hash table
 * Return: the value to map to hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
