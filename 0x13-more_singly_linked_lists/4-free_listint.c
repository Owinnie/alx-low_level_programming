#include "lists.h"
/**
  * free_listint - free listint_t
  * @head: ptr to head
  */
void free_listint(listint_t *head)
{
	listint_t *first = head;
	listint_t *nxt;

	if (first == NULL)
		return;
	while (first != NULL)
	{
		nxt = first->next;
		free(first);
		first = nxt;
	}
	free(first);
}
