#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: concanated values
 * @av: concanate vector
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, a = 0, b = 0, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b])
		{
			ch++;
			b++;
		}
		b = 0;
		a++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			s[c] = av[a][b];
			c++;
			b++;
		}
		s[c] = '\n';
		b = 0;
		c++;
		a++;

	}
	c++;
	s[c] = '\0';
	return (s);
}
