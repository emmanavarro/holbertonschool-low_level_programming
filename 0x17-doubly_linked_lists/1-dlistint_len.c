#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Head of the list. Pointer to a structure dlistint_sHead of the list.
 * Return: the number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new = h;
	size_t countNode = 0;

	while (new != NULL)
	{
		countNode++;
		new = new->next;
	}
	return (countNode);
}
