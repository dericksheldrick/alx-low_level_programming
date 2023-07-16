#include<stdlib.h>
#include"main.h"
#include<stdio.h>
/**
 *_calloc -allocates memory for an array
 * @nmemb: number of members
 * @size: size of array
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, k = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	k = nmemb * size;
	p = malloc(k);

	if (p == NULL)
		return (NULL);
	while (i < k)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
