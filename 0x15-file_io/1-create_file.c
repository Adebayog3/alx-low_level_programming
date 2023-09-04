#include "main.h"

/**
 * create_file - create a file and write content to it
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 *
 * Return: If the function fails, return -1; otherwise, return 1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{

	for (len = 0; text_content[len];)
	len++;

	}

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (o == -1)
	return (-1);

	if (text_content != NULL)
	{
	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}
	}

	close(o);
	return (1);
}

