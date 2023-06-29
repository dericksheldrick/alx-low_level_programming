#include"main.h"
/**
 * _strncat -  concatenates two strings.
 * @n: numberr of bytes from the src
 * @dest: the string to be appended
 * @src:the string to be appended to dest
 * Return: return string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
