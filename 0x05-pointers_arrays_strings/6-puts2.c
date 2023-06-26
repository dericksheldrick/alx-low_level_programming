#include"main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character,followed by new line
 * @str: print the string
 * Return: void
 */
void puts2(char *str)
{
	int t;
	int r = 0;

	while (str[r] != '\0')
	{
		r++;
	}
	for (t = 0; t < r; t += 2)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
