#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: the string to be appended
 * @src:the string to be appended to dest
 * Return: return string dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	dest[dest_len] = '\0';
	return (dest);
}

