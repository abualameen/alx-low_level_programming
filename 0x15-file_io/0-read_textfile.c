#include "main.h"
/**
 * read_textfile - reads and prints file
 * @filename: name of the file to be read
 * @letters:  the number of letters it should read and print
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buffer;
	ssize_t num_bytes_r;
	ssize_t num_bytes_w;

	if (!filename)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	buffer = (char *) malloc(letters);
	if (!buffer)
	{
		close(fp);
		return (0);
	}
	num_bytes_r = read(fp, buffer, letters);
	if (num_bytes_r == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	num_bytes_w = write(STDOUT_FILENO, buffer, num_bytes_r);
	if (num_bytes_w == -1 || num_bytes_w != num_bytes_r)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);
	return (num_bytes_w);
}
