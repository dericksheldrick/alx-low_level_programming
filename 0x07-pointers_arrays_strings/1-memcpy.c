#include"main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination pointer
 * @src: source file
 * @n: number of const byte
 * Return: always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
