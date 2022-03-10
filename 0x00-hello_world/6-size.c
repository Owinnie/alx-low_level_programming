#include <stdio.h>
/**
  * main - displays sizes of different
  * data types.
  *
  * Return: 0
  */
int main(void)
{
	float num1;
	int num2;
	long int num3;
	char word1;
	long long int num4;
	/* prints the sizes*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(word1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num2));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num3));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(num4));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(num1));
	return (0);
}
