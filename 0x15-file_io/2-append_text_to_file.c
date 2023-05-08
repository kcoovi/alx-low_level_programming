#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function*
 * @filename: file name
 * @text_content: text content
 * Return: return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_w;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
	return (-1);

	if (text_content != NULL)
	{
		b_w = write(fd, text_content, strlen(text_content));
		if (b_w < 0)
		{
			close(fd);
			return (-1);
		}
	}
close(fd);
return (1);

}
