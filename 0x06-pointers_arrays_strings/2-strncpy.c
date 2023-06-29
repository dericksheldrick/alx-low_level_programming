#include "main.h"
/**
 * _strncpy - copies a string.
 * @dest: storing the buffering string
 * @n: input the integers
 * @src: source file
 * Return: always return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
		dest[c] = src[c];
	for (; c < n; c++)
		dest[c] = '\0';
	return (dest);
}
