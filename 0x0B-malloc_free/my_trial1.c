#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _strlen - find len of a string
  * @s: string
  * Return: int
  */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}
/**
  * str_concat - concat 2 strings
  * @s1: para1
  * @s2: para2
  *
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	s = malloc((size1 + size2) * sizeof(char) + 1);
	if (s == 0)
		return (0);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			s[i] = s1[i];
		else
			s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
