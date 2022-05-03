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
	for (i = 0; text_content[i] != '\0'; i++)
		;
	if (text_content != NULL)
	{
		write_output = write(fd, text_content, i);
		if (write_output == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
