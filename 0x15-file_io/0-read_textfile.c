#include "main.h"
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t count, wcount;


	if (filename == NULL)
		return (0);

	fd = open(filename,O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	count = read(fd, buffer, letters);
	if (count == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, count);
	if (wcount != count)
		return (0);

	free(buffer);

	return (wcount);
}
