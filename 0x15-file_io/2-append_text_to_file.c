#include"main.h"
/**
*append_text_to_file - appends text at the end of a file
*@filename:is the name of the file
*@text_content: string to add at the end of the file
*Return:1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int t, w, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	t = open(filename, O_WRONLY | O_APPEND);
	w = write(t, text_content, size);

	if (t == -1 || w == -1)
		return (-1);
	close(0);

	return (1);
}
