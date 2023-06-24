#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n:number of times the character \ should be printed
 * Return: draws a diagonal line on the terminal.
 */
void print_diagonal(int n)
{
	int k;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
