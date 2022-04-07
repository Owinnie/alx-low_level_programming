#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * string_nconcat - concat 2 strings
  * @s1: para1
  * @s2: para2
  * @n: para3
  * Return: char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	ptr = malloc(l1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
