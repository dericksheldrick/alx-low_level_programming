#include"main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s : string
 * @accept: input
 * Return:number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned  int i, n, price, weight;

	price = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		weight = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				price++;
				weight = 1;
			}
		}
		if (weight == 0)
			break;
	}
	return (price);
}
