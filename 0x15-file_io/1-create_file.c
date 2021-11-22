#include "main.h"
#include <stdio.h>


/**
 * create_file - create a file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 (success) -1 (error)
 **/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	count = write(fd, text_content, strlen(text_content));
	if (count == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
