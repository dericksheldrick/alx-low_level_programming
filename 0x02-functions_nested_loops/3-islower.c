#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: character in ASII CODE
 * Returns: 1 for lowercase character 0 rest
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

