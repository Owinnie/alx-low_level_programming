#include "lists.h"
/**
  * free_listint2 - free listint_t, head points 2 NULL
  * @head: ptr to head
  */
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		nxt = *head;
		*head = (*head)->next;
		free(nxt);
	}
}
