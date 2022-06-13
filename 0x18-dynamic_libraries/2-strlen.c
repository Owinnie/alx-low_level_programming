#include "main.h"
/**
  * _strlen - find string length
  * @s: parameter
  * Return: int
  */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
