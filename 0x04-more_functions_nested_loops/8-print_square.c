#include "main.h"
/**
 * print_square- print squares, followed by a new line
 * @size: size of the squares
 * Print newline when size is zero or less
 * Return: squares
 */
void print_square(int size)
{
	int v;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 0; v < size; v++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
