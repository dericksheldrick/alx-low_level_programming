#include<stdio.h>
/**
 *main - entry point
 *
 * description:'program that prints the lowercase alphabet in reverse'
 * return always return zero
 */
int main(void)
{
	char z = 122;

	for (z = 122; z >= 97; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
