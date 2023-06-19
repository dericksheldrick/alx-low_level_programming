#include<stdio.h>
/**
 *main - entry point
 *
 * program that prints all the numbers of base 16 in lowercase
 * Return: is always zero
 */
int main(void)
{
	int m;
	int t;

	for (m = 48; m <= 57; m++)
	{
		putchar(m);
	}
	for (t = 97; t <= 102; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
