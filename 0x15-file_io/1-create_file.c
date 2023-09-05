#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int var_fd, var_w, var_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (var_len = 0; text_content[var_len];)
			var_len++;
	}

	var_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	var_w = write(var_fd, text_content, var_len);

	if (var_fd == -1 || var_w == -1)
		return (-1);

	close(var_fd);

	return (1);
}
