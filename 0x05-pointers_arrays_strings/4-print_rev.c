#include "main.h"
/**
  * print_rev - prints string in reverse
  * @s: para
  */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
