#include "main.h"
#include <stdio.h>
/**
  * _memset - fill memory
  * @s: para1
  * @b:para2
  * @n:para3
  *
  * Return: char
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
