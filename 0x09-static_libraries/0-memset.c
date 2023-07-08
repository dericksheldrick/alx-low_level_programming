 #include "main.h"
/**
 *  * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @d: character input
 * @m: input integers
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char d, unsigned int m)
{
	int i = 0;

	for (; m > 0; i++)
	{
		s[i] = d;
		m--;
	}
	return (s);
}

