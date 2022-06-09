#include "lists.h"
/**
  * add_dnodeint - add node at beginning
  * @head: first node
  * @n: 
  * Return: address of the new element, or NULL
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = getNewNode(n);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
