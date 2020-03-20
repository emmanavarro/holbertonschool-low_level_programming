#include "lists.h"

/**
  * *add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to the head of a list
  * @str: pointer to a string
  *
  * Return: node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	int length = 0;
	list_t *tmp;
	list_t *end_list;

	end_list = malloc(sizeof(list_t));

	if (end_list == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0';  i++)
	{
		length++;
	}

	end_list->str = strdup(str);
	end_list->len = length;
	end_list->next = NULL;

	if (*head == NULL)
	{
		*head = end_list;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_list;
	}
	return (end_list);
}
