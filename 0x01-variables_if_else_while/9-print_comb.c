#include<stdio.h>
/**
 * main -entry point
 *
 * program that prints all possible combinations
 * return is always zero
 */
int main(void)
{
	int v;

	for (v = 48; v <= 57; v++)
	{
		putchar(v);
		if (v == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
