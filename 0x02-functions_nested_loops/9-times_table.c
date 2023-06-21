#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: always 0
 */
void times_table(void)
{
	int c,d,s;

	for (c = 0; c < 10 ; c++)
	{
		for (d = 0; d <10; d++)
		{
			s = d * c;
			if (d == 0)
			{
				_putchar(s + '0');
			}
			if (s < 10 && d != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else if (s >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((s / 10) + 'o');
				_putchar((s % 10) + '0');
			}
		}_putchar('\n');
	}
}
