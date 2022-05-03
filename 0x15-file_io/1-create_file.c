#include "main.h"
/**
  * create_file - create a file
  * @filename: path
  * @text_content: null-terminated str
  *
  * Return: 1 on success, -1 on failure
  */
int create_file(const char *filename, char *text_content)
{
	int i, fd;
	ssize_t write_output;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_output = write(fd, text_content, len(text_content));
		if (write_output == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
/**
  * len - length of a string
  * @s: input char
  * Return: length of a string
  */

int len(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
