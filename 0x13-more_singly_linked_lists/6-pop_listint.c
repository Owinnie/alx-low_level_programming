#include "lists.h"
#include <stdio.h>
/**
  * pop_listint - delete head
  * @head: ptr to ptr to head
  *
  * Return: int
  */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int v;

	if (head == NULL)
		return (0);
	current = *head;
	if (current == NULL)
		return (0);
	v = current->n;
	*head = current->next;
	free(current);
	return (v);
}
