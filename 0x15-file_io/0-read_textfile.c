#include"main.h"
#include<stdlib.h>
/**
* read_textfile -eads a text file and prints it to the POSIX standard output.
*@filename: text to be read
*@letters: numbers of letters to be read and printed to the POSIX
*Return: actual number of letter it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t fd;
	size_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	r = read(fd, p, letters);
	w = write(STDOUT_FILENO, p, r);

	free(p);
	close(fd);
	return (w);
}
