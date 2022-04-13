#include "function_pointers.h"
/**
  * print_name - prints a name
  * @name: para1
  * @f: para2
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
