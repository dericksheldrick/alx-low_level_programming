#include "main.h"

/**
 * print_alphabet_x10-10 times print alphabet
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int h;
	int y;

	for (h = 1; h <= 10; h++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
