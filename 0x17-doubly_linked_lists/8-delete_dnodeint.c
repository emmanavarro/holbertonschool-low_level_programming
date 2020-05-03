#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint.
 * @head: Head of the list. Pointer to a structure dlistint_s.
 * @index: the inde of the node that should be deleted, index starts at 0.
 * Return: 1 if succeed, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int counter;

	if (!head || !(*head))
		return (-1);

	for (counter = 0; counter < index; counter++)
	{
		node = node->next;
		if (node == NULL)
			return (-1);
	}
	if (index == 0)
	{
		if (node->next)
			node->next->prev = NULL;
		*head = node->next;
	}
	else
	{
		if (node->next)
			node->next->prev = node->prev;
		if (node->prev)
			node->prev->next = node->next;
	}
	free(node);
	return (1);
}
