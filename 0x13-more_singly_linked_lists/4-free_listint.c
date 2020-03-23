#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: beginning of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp, *store;

	tmp = head;

	while (tmp != NULL)
	{
		store = tmp->next;
		free(tmp);
		tmp = store;
	}
}
