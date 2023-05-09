#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * cp_file - copy file
 * @f_from: file from
 * @f_to: file
 * Return: return
 */
int cp_file(const char *f_from, const char *f_to)
{
	int fd_fr, fd_to, rd, wr;
	char *bf;
	
	bf = malloc(sizeof(char) * 1024);

	if (bf == NULL)
	return (-1);

	fd_fr = open(f_from, O_RDONLY);
	if (fd_fr == -1)
	return (-1);

	fd_to = open(f_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	return (-1);

	while ((rd = read(fd_fr, bf, 1024)) > 0)
	{
	wr = write(fd_to, bf, rd);
	if (wr != rd)
	return (-1);
	}

	if (rd == -1)
	return (-1);

	if (close(fd_fr) == -1 || close(fd_to) == -1)
	return (-1);

	return (0);
}

/**
 * main - main
 * @argc:  argc
 * @argv: argv
 * Return: return
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	exit(97);
	}

	if (cp_file(argv[1], argv[2]) == -1)
	{
	if (access(argv[1], F_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	}

	return (0);
}
