#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function
 * @filename: file name
 * @letter: letters
 * Return: return
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t r;
	ssize_t b_r;
	char *b;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	b = malloc(sizeof(char) * letters);

	r = read(fd, b, letters);
	b_r =  write(STDOUT_FILENO, b, r);

	close(fd);
	free(b);

	return (b_r);
}
