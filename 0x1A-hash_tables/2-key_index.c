#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array
 * @key: The key to find the index for
 * @size: Size of the hash table array
 *
 * Return: Index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	unsigned long int index = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
