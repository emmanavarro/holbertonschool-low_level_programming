#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print -function that prints a hash table.
 * @ht: hash table.
 * Return:void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			i = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
