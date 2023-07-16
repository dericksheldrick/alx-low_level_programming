#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * malloc_checked - allocate memory
 * @b: space to be allocated
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *t;
	t = malloc(b);
	
	if (t == NULL)
		exit(98);
	return (t);
}
