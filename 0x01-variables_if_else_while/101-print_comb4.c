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
	int f;

	for (r = 48; r <= 57; r++)

	for (y = r + 1; y <= 57; y++)

	for (f = y + 1; f <= 57; f++)
	{
		if ((r != y) != f)
		{
			putchar(r);
			putchar(y);
			putchar(f);
		}
		if (r == 55 && y == 56)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
