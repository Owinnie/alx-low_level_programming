#include "lists.h"
#include <string.h>
/**
  * add_node - add node before
  * @head: ptr to fisrt node
  * @str: attribute of struct
  *
  * Return: pointer to type struct
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	int ln;

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	for (ln = 0; str[ln] != '\0'; ln++)
		;
	temp->len = ln;
	temp->next = *head;
	*head = temp;

	return (temp);
}
