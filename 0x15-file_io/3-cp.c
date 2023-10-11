#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buf[BUF_SIZE];
	ssize_t num_read;
	ssize_t num_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", argv[2]);
		exit(99);
	}
	while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		num_written = write(fd_to, buf, num_read);
		if (num_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: %s\n", argv[2]);
			exit(99);
		}
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: %s\n", argv[2]);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: %d\n", fd_to);
		exit(100);
	}
	return (0);
}

