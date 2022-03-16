#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - function
  * @n: natural numbers
  *
  * Description: natural nums
  */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	putchar('\n');
}
