#include "lists.h"
/**
  * add_dnodeint - add node at beginning
  * @head: first node
  * @n: 
  * Return: address of the new element, or NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw = getNewNode(n);

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}
	(*head)->prev = nw;
	nw->next = *head;
	*head = nw;
	return (nw);
}
