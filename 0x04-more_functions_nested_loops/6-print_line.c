#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 * Return: draws a straight line in the terminal.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}

	}
	_putchar('\n');
}
