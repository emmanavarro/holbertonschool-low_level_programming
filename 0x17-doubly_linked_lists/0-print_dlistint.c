#include "lists.h"
/**
 * print_dlistint - Function that prints content of a doubly linked list.
 * @h: Head of the list. Pointer to a structure dlistint_s.
 * Return: the number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new = h;
	size_t countNode = 0;

	while (new != NULL)
	{
		printf("%d\n", new->n);
		countNode++;
		new = new->next;
	}
	return (countNode);
}
