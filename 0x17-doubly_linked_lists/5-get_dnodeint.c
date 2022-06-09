#include "lists.h"
/**
  * get_dnodeint_at_index - get nth node
  * @head: list
  * @index: index of node to get
  * Return: the nth node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (dlistint_len(head) >= (size_t)index || head == NULL)
		return (NULL);
	for (; index != 0; index--)
		head = head->next;
	return (head);
}
