#include "main.h"
void file_coping(const char *src, const char *dest);
/**
 * main - main entry
 * @argc: argument count
 * @argv: vector arghu
 * Return: 0;
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_coping(argv[1], argv[2]);
	return (0);
}

/**
 * file_coping - copies file content to anotheer
 * @src: source
 * @dest: destination file
 * Return: 0
 */

void file_coping(const char *src, const char *dest)
{
	int fd_from, fd_to;
	ssize_t num_read, num_written;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	fd_from = open(src, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		free(buffer);
		exit(98);
	}

	fd_to = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		free(buffer);
		exit(99);
	}
	while ((num_read = read(fd_from, buffer, BUFFER_S)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			free(buffer);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		free(buffer);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_from);
		free(buffer);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n", fd_to);
		free(buffer);
		exit(100);
	}
	free(buffer);
}
