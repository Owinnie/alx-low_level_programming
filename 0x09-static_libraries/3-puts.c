#include "main.h"
/**
  * _puts - print string to stout
  * @str: para
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
