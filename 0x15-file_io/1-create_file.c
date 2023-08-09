#include"main.h"
/**
 *create_file - creates a file
 *@filename: name of the file to be created
 *@text_content: create an empty file
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, size);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
