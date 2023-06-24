#include"main.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14
 * followed new line
 * Return: number 0-14 printed 10 times
 */

void more_numbers(void)
{
	int i;
	int t;

	for (i = 0; i <  10; i++)
	{
		for (t = 0; t <= 14; t++)
		{
			if (t > 10)
			{
				_putchar((t / 10) + '0');
			}
			_putchar((t % 10) + '0');
		}
		_putchar('\n');
	}
}
