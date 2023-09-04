#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letter: the letter printed
 * Return: 0
 */

size_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
