#include <stdio.h>
/**
  * main - my main function
  * Return: 1
  */
int main(void)
{
	char *x = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int len = sizeof(x);

	fwrite(x, 1, len, stderr);
	return (1);
}
