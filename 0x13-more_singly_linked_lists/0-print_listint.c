#include "lists.h"
#include <stdio.h>
/**
  * print_listint - print all list elements
  * @h: list
  * Return: type size_t
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *copy = h;

	while (copy != NULL)
	{
		printf("", copy->n);
		copy = copy->next;
		count++;
	}
	return (count);
}
