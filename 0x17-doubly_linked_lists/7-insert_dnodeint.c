#include "lists.h"
/**
  * insert_dnodeint_at_index - Function that inserts node at index.
  * @h: head of the list.
  * @idx: index.
  * @n: integer value of dlistint.
  * Return: the address of the new node, or NULL if it failed.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *tempNode = *h;
	unsigned int countNode;

	if (h == NULL)
		return (NULL);
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!tempNode && idx > 0)
	{	free(newNode);
		return (NULL);
	}
	if (idx == 0)
	{
		if (!tempNode)
			newNode->next = NULL;
		else
		{
			newNode->next = tempNode;
			tempNode->prev = newNode;
		}
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	for (countNode = 0; countNode < idx - 1; countNode++)
	{
		if (!tempNode)
		{	free(newNode);
			return (NULL);
		}
		tempNode = tempNode->next;
	}
	newNode->next = tempNode->next;
	newNode->prev = tempNode;
	if (tempNode->next)
		tempNode->next->prev = newNode;
	tempNode->next = newNode;
	return (newNode);
}
