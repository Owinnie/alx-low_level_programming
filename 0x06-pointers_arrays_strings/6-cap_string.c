#include "main.h"
#include <stdio.h>
/**
  * cap_string - capitalize
  * @s: para
  * Return: char
  */
char *cap_string(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index - 1] == ',' || s[index - 1] == ';'
			|| s[index - 1] == '.' || s[index - 1] == '!'
			|| s[index - 1] == '?' || s[index - 1] == '('
			|| s[index - 1] == ')' || s[index - 1] == '{'
			|| s[index - 1] == '}' || s[index - 1] == '"'
			|| s[index - 1] == ' ' || s[index - 1] == '\t' || s[index - 1] == '\n')
		{
			if (s[index] >= 'a' && s[index] <= 'z')
			{
				s[index] = s[index] - ' ';
			}
		}
	}
	return (s);
}
