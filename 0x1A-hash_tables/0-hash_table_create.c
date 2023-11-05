#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of the array
 *
 * Return: Pointer to the newly created hash table,
 *          or NULL if allocation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	new_table->size = size;
	return (new_table);
}
