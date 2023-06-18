#include<stdio.h>
/**
 * main - entry point
 *
 * combinations of two two-digit numbers.
 * return always return 0 (success)
 */
int main(void)
{
	int b;
	int c;

	for (b = 0; b <= 99; b++)
	{
		for (c = b + 1; c <= 99; c++)
		{
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			putchar(' ');
			putchar(c / 10 + '0');
			putchar(c % 10 + '0');
			if (b != 98 || c != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
