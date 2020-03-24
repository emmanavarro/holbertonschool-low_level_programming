#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: beginning of the list
 *
 * Return: head nodes data (n)
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (n);
}
