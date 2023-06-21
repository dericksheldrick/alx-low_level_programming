#include "main.h"
/**
 * print_last_digit - print the last digit of number
 * @d: input the integers
 * Return: value of the last digit
 */
int print_last_digit(int d)
{
	int f;

	f = d % 10;

	if (f < 0)
	{
		_putchar(-f + 48);
		return (-f);
	}
	else
	{
		_putchar(f + 48);
		return (f);
	}
	_putchar('\n');
}
