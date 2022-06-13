#include "main.h"
/**
  * _abs - absolute value of int
  * @i: int
  *
  * Description: print abs values of int
  * Return: 0
  */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		return (i);
	}
	else
	{
		i *= 1;
		return (i);
	}
}
