#include "main.h"
#include <stdio.h>
/**
  * _strcmp - compare strings
  * @s1: para1
  * @s2: para2
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
