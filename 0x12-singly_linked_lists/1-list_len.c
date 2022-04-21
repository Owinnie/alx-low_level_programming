#include "lists.h"
#include <stdio.h>
/**
  * list_len - no. of elements in a list
  * @h: list
  *
  * Return: type size_t
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *copy = h;

	while (copy != NULL)
	{
		copy = copy->next;
		count++;
	}
	return (count);
}
