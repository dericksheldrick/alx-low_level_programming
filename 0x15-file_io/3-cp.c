#include<stdlib.h>
#include<stdio.h>
#include"main.h"

char *make_buffer(char *file);
void close_file(int fildes);
/**
*make_buffer - allocate 1024 bytes to be used by the buffer
*@file: the name of the file storing the char
*Return: a pointer to the new allocated buffer
*/
char *make_buffer(char *file)
{
	char *p;

	p = malloc(sizeof(char) * 1024);

	if (p == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error:Can't write to %sn", file);
		exit(99);
	}

	return (p);
}

/**
*close_file - function closes the file descriptors
*@fildes: file descriptor to be closed
*/
void close_file(int fildes)
{
	int t;

	t = close(fildes);

	if (t == -1)
	{
		dprintf(STDERR_FILENO,
			"Error:Can't close fildes %d\n", fildes);
		exit(100);
	}
}
/**
*main - copy the one file to another file.
*@argc: arguments supplied through the program
*@argv: array of pointers to the arguments.
*Return:0 upon success
*/
int main(int argc, char *argv[])
{
	int where, to, a, w;
	char *p;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}
	p = make_buffer(argv[2]);
	where = open(argv[1], O_RDONLY);
	a = read(where, p, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (where == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(p);
			exit(98);
		}

		w = write(to, p, a);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(p);
			exit(99);
		}

		a = read(where, p, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);


	} while (a > 0);

	free(p);
	close_file(where);
	close_file(to);

	return (0);

}
