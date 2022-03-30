#include "main.h"
#include <stdio.h>
/**
  * factorial - return n!
  * @n: para
  *
  * Return: int
  */
int factorial(int n)
{
	if (n < 0)
		return (- 1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
