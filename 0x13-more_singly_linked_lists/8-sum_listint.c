#include "lists.h"
#include <stdio.h>
/**
  * sum_listint - sum of all data
  * @head: ptr
  *
  * Return: int
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
