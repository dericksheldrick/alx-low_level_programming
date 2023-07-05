#include"main.h"
/**
 * _strlen_recursion - eturns the length of a string.
 * @s: string input
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	s++;
	return(_strlen_recursion(s) + 1);
}
