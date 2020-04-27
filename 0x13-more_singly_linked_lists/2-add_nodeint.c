#include "lists.h"

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of a list
 * @n: integer of the list
 *
 * Return: address of the new element o NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list = 0;

	new_list = malloc(sizeof(listint_t));

	if (new_list == NULL)
	{
		return (NULL);
	}
	new_list->n = n;
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
