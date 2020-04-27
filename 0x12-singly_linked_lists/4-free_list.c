#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: beginning of the list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp, *store;

	tmp = head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = store;
	}
}
