#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: content to add
 *
 * Return: 1 on sucess -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
