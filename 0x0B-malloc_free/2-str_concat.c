#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * str_concat - concatenates  two strings
 * @s1: first string to  concatenate
 * @s2: second string to concatenate
 * Return: point new allocate space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int r = 0, t = 0, u = 0, v = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[r])
		r++;
	while (s2[t])
		t++;
	v = r + t;
	s = malloc((sizeof(char) * v) + 1);

	if (s == NULL)
		return (NULL);
	t = 0;
	while (u < v)
	{
		if (u <= r)
			s[u] = s1[u];
		if (u >= r)
		{
			s[u] = s2[t];
			t++;
		}
		u++;
	}
	s[u] = '\0';
	return (s);
}
