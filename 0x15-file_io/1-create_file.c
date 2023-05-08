#include "main.h"
/**
 * create_file - create file
 * @filename:  filename
 * @text_content: content of the file
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int num;
	int t;
	int counter = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	for (t = 0; text_content[t] != '\0'; t++)
	{
		counter++;
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	num = write(fp, text_content, counter);
	if (fp == -1 || num == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
