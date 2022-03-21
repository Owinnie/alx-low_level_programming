#include "main.h"
/**
  * _strlen - find string length
  * @s: parameter
  * Return: int
  */
int _strlen(char *s)
{
	int count;
	char index;

	index = s[0];
	count = 0;
	while (index != '\0')
	{
		count++;
		index++;
	}
	return (count);
}
