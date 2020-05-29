#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create -Function that creates a hash table
 * @size: Size of the array
 * Return: Pointer to the new Hash table created.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newH_table;

	newH_table = malloc(sizeof(hash_table_t));

	if (newH_table == NULL)
		return (NULL);

	newH_table->size = size;
	newH_table->array = calloc(size, sizeof(hash_node_t *));
	if (newH_table->array == NULL)
	{
		free(newH_table);
		return (NULL);
	}
	return (newH_table);
}
