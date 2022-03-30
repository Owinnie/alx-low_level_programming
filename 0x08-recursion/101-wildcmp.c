#include "main.h"
#include <stdio.h>
/**
  * wildcmp - compare strings
  * @s1: para1
  * @s2: para 2
  *
  * Return: int
  */
int wildcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	if (s1[index] == s2[index])
	{
		wildcmp(s1 + 1, s2 + 1);
		return (1);
	}
	return (0);
}
