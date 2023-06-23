#include"main.h"
/**
 * void print_most_numbers -  prints the numbers, from 0 to 9
 * followed by a new line
 * Don't print 2&4
 * Return:print numbers from 0-9 without 2&4
 */
void print_most_numbers(void)
{
	int r;

	for (r = 48; r <= 57; r++)
	{
		if (r == 50 || r == 52)
		{
			continue;
		}
		else
		{
			_putchar(r);
		}

	}
	_putchar('\n');
}
