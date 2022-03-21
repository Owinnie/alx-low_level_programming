#include "main.h"
/**
  * print_rev - prints string in reverse
  * @s: para
  */
void print_rev(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	while (index > 0)
	{
		s--;
		_putchar(*s);
		index--;
	}
	_putchar('\n');
}
