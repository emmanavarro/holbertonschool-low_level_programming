#include "lists.h"

/**
  * *add_node - adds a new node at the beginning of a list_t list
  * @head: pointer to the head of a list
  * @str: pointer to a string
  *
  * Return: node
  */

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	int length = 0;
	list_t *new_list;

	new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0';  i++)
	{
		length++;
	}

	new_list->str = strdup(str);
	new_list->len = length;
	new_list->next = *head;
	*head = new_list;

	return (new_list);
}
