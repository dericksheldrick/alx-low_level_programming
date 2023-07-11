#include"main.h"
#include<stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array being created
 * @c: character in the array
 * Return: a pointer to the array/null if failed
 */
char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *t;

	if (size == 0)
		return (NULL);

	t = malloc(size * sizeof(char));
	if (t == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
	{
		t[r] = c;
	}
	return (t);
}
