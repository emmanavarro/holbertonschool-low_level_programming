#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a liked list.
 * @head: pointer to the first element of the list.
 *
 * Return: the sum of any node's content
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
