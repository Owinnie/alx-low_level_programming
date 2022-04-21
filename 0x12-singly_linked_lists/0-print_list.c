#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_list - print all list elements
  * @h: list
  * Return: type size_t
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *copy = h;

	while (copy != NULL)
	{
		printf("[%d] %s\n", copy->len, copy->str != NULL ? copy->str : "(nil)");
		copy = copy->next;
		count++;
	}
	return (count);
}
