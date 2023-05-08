#include "main.h"
/**
 * create_file - function to create a file
 * @filename: file name
 * @text_content: text content
 * Return: return
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_w;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
	return (-1);

	if (text_content != NULL)
	{
		ssize_t b_w = write(fd, text_content, strlen(text_content));

		if (b_w < 0)
		{
			close(fd);
			return (-1);
		}
	}

close(fd);
return (1);
}
