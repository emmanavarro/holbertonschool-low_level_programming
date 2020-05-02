#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Head of the list. Pointer to a structure dlistint_s.
 * @n: int value in the structure.
 * Return: the address of the new element or NULL if fail (the new node).
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	current = *head;
		while (current->next != NULL)
			current = current->next;

		newNode->prev = current;
		current->next = newNode;

		return (newNode);
}
