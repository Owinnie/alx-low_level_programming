#include "main.h"
#include <stdio.h>
/**
  * string_toupper - change all to upper
  * @s: para1
  * Return: char
  */
char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] = s[index] - ' ';
	}
	return (s);
}
