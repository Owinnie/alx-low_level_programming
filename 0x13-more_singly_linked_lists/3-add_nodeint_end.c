#include "lists.h"
#include <stdio.h>
/**
  * add_nodeint_end - add node at the end
  * @head: ptr to ptr to head
  * @n: attribute of struct
  *
  * Return: null or new address
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first = *head;
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	if (first == NULL)
		*head = node;
	else
	{
		while (first->next != NULL)
			first = first->next;
		first->next = node;
	}
	return (node);
}
