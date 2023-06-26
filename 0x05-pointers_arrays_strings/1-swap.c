#include<stdio.h>
/**
 * swap_int - swaps the values of two integers.
 * @b: input the integer
 * @a: input the integer
 * Return: always nothing
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
