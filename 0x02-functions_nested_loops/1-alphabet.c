#include "main.h"
/**
 * print_alphabet - print the lowercase
 *
 * Return: 0 sucess
 */
void print_alphabet(void)
{
	int m;

	for (m = 97; m <= 122;  m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
