#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the beginning of the list
 * @index: index of the node that should be deleted
 *
 * Return: if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *delet;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL; i++)
	{
		if (i == index - 1)
		{
			delet = tmp->next;
			tmp->next = delet->next;
			free(delet);
			return (1);
		}
		tmp = tmp->next;
	}
	return (-1);
}
