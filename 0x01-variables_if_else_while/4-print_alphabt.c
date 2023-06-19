#include<stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char b = 97;

	while (b <= 122)
	{
		if (b == 101 || b == 113)
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar ('\n');
	return (0);
}
