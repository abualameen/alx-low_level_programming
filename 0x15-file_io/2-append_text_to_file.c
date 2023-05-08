#include "main.h"
/**
 * append_text_to_file - appends to the end of the file
 * @filename: file name
 * @text_content: text
 * Return: 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int num_wri;
	int counter = 0;
	int t;

	for (t = 0; text_content[t] != '\0'; t++)
	{
		counter++;
	}
	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_EXCL | O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	num_wri = write(fp, text_content, counter);
	if (num_wri == -1)
	{
		return (-1);
	}
	return (1);
}
