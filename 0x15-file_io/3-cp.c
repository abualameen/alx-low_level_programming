#include "main.h"
int gon(void);
/**
 * main - main entry
 * @argc: argument count
 * @argv: vector arghu
 * Return: 0;
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t num_read, num_written;
	char buffer[BUFFER_S];
	mode_t file_permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_permissions);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((num_read = read(fd_from, buffer, BUFFER_S)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * gon - gon new
 * Return: void
 */
int gon(void)
{
	return (0);
}
