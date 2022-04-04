#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - concat 2 strings
  * @s1: para1
  * @s2: para2
  *
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	s = malloc(sizeof(*s1) + sizeof(*s2));
	if (s == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < i && s2[j] != '\0'; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
