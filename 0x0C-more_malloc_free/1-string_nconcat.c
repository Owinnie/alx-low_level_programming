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
	unsigned int index;
	char *ptr;

	ptr = realloc(s1, 2 * sizeof(s1));
	for (index = 0; index < n; index++)
	{
		ptr[sizeof(s1) + 1] = s2[index];
	}
	return (ptr);
}
