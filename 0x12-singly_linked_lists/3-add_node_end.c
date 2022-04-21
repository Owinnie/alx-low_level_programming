#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
  * add_node_end - add node at the end
  * @head: ptr to first node
  * @str: str attribute of struct
  *
  * Return: ptr to struct
  */
list_t *add_node_end(list_t **head, const char *str)
{
	int ln;
	list_t *first = *head;
	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	while (first && first->next != NULL)
		first = first->next;
	for (ln = 0; str[ln] != '\0'; ln++)
		;
	node->len = ln;
	node->next = NULL;
	if (first)
		first->next = node;
	else
		*head = node;
	return (node);
}
