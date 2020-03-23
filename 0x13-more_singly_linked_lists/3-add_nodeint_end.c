#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of a list
 * @n: number of the list
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *end_int;

	end_int = malloc(sizeof(listint_t));

	if (end_int == NULL)
	{
		return (NULL);
	}

	end_int->n = n;
	end_int->next = NULL;

	if (*head == NULL)
	{
		*head = end_int;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_int;
	}
	return (end_int);
}
