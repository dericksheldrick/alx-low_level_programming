#include"main.h"
/**
 * print_triangle -  prints a triangle, followed by a new line
 * @size: is the size of the triangle
 * Return: print triangle
 */
void print_triangle(int size)
{
	int k;
	int m;
	int n;

	if (size > 0)
	{
		for (k = 1; k <= size; k++)
		{
			for (m = 0; m < size - k; m++)
			{
				_putchar(' ');
			}
			for (n = 0; n < k; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

