#include "lists.h"
/**
 * sum_dlistint - Function that return the sum of  all data of the list.
 * @head: Head of the list. Pointer to a structure dlistint_s.
 * Return: sum of all data of the list.
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
