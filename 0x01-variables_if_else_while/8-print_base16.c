#include<stdio.h>
/**
 *main - entry point
 *
 * program that prints all the numbers of base 16 in lowercase
 * return is always zero
 */
int main(void)
{
	int m;
	int t;

	for (m = 49; m <= 57; m++)
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
