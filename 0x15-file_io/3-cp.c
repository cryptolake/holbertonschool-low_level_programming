#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd_fr, fd_to;
	ssize_t nread, nwrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fd_fr = open(argv[1], O_RDONLY);
	if (fd_fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC , S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_fr);
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);

	}

	while (nread = read(fd_fr, buffer, sizeof(buffer)), nread > 0)
	{
		nwrite = write(fd_to, buffer, nread);
		if (nwrite < 0)
		{
			close(fd_fr);
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}




	return (0);
}
