#include"main.h"
/**
 * string_toupper -  changes lowercase string to uppercase
 * @s: string to be converted
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int f;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] >= 'a' && s[f] <= 'z')
			s[f] = s[f] - 'a' + 'A';
	}
	return (s);


}
