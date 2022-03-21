#include "main.h"
/**
  * print_rev - prints string in reverse
  * @s: para
  */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
