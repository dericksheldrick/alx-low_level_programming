#include<stdio.h>
/**
 * main - entry point
 *
 * all possible combination of two digits
 * Return: zero (succees)
 */
int main(void)
{
	int r;
	int y;

	for (r = 48; r <= 57; r++)

	for (y = r + 1; y <= 57; y++)
	{
		if (r != y)
		{
			putchar(r);
			putchar(y);
		}
		if (r == 56 && y == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
