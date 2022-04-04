#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strdup - pointer to copy of string
  * @str: para1
  *
  * Return: char
  */
char *_strdup(char *str)
{
	int size, index;
	char *s;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	s = malloc((sizeof(*str) * size) + 1);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (index = 0; index < size; index++)
			s[index] = str[index];
	}
	return (s);
}
