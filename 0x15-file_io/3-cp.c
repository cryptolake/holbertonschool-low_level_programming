#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_fail - check close fails
 * @fd: file descriptor
 * @errc: close return code
 *
 **/
void close_fail(int fd, int errc)
{
	if (errc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy - copy from fd_fr to fd_to
 * @fd_fr: from
 * @fd_to: to
 * @argv: file names
 *
 **/
void copy(int fd_fr, int fd_to, char **argv)
{
	ssize_t nread, nwrite;
	char buffer[1024];

	while (nread = read(fd_fr, buffer, sizeof(buffer)), nread > 0)
	{
		nwrite = write(fd_to, buffer, nread);
		if (nwrite < 0)
		{
			close_fail(fd_fr, close(fd_fr));
			close_fail(fd_to, close(fd_to));
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nread == -1)
	{
		close_fail(fd_fr, close(fd_fr));
		close_fail(fd_to, close(fd_to));
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}

/**
 * main - copy file contents
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 success
 **/
int main(int argc, char *argv[])
{
	int fd_fr, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
				 S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close_fail(fd_fr, close(fd_fr));
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy(fd_fr, fd_to, argv);

	close_fail(fd_fr, close(fd_fr));
	close_fail(fd_to, close(fd_to));
	return (0);
}
