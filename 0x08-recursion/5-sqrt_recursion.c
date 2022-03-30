#include "main.h"
#include <stdio.h>
/**
  * _sqrt_recursion - return natural sqroot
  * @n: para
  *
  * Return: int
  */
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
/**
  * sq - return square root
  * @num1: para1
  * @squared: para2
  *
  * Return: int
  */
int sq(int num1, int squared)
{
	if (num1 * num1 == squared)
		return (num1);
	else if (num1 * num1 < squared)
		return (sq(squared, num1 + 1));
	else
		return (-1);
}
