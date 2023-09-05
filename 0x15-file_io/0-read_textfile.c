#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: var_w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *var_buf;
	ssize_t var_fd;
	ssize_t var_w;
	ssize_t var_t;

	var_fd = open(filename, O_RDONLY);
	if (var_fd == -1)
		return (0);
	var_buf = malloc(sizeof(char) * letters);
	var_t = read(var_fd, var_buf, letters);
	var_w = write(STDOUT_FILENO, var_buf, var_t);

	free(var_buf);
	close(var_fd);
	return (var_w);
}
