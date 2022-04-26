#include "lists.h"
#include <stdio.h>
/**
  * add_nodeint - add node at beginning
  * @head: ptr to ptr to head
  * @n: attribute of struct
  *
  * Return: null or address
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
