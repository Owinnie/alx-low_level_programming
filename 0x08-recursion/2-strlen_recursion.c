#include "main.h"
#include <stdio.h>
/**
  * _strlen_recursion - return str len
  * @s: para
  *
  * Return: int
  */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s > '\0')
	{
		count += _strlen_recursion(s + 1);
		count += 1;
	}
	return (count);
}
