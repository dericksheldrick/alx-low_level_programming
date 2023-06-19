#include<stdio.h>
/**
 *main - entry point
 * Return: always return 0
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
