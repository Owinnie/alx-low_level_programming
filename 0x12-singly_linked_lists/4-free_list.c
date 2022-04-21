#include "lists.h"
/**
  * free_list - frees a list_t list
  * @head: ptr to head
  */
void free_list(list_t *head)
{
	list_t *first = head;
	list_t *nxt;

	while (first != NULL)
	{
		nxt = first->next;
		free(first->str);
		free(first);
		first = nxt;
	}
}
