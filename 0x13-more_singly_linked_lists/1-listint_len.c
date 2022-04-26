#include "lists.h"
#include <stdio.h>
/**
  * listint_len - no. of elements in a list
  * @h: list
  *
  * Return: type size_t
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *copy = h;

	while (copy != NULL)
	{
		copy = copy->next;
		count++;
	}
	return (count);
}
