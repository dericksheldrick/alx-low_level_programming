#include"main.h"
/**
 * rev_string - rev_string
 * @s : prints the string
 * Return: void
 */
void rev_string(char *s)
{
	int yun = 0, hup = 0;
	char cup;

	while (s[hup])
		yun++;
	for (hup = yun - 1; hup >= yun / 2; hup--)
	{
		cup = s[hup];
		s[hup] = s[yun - hup - 1];
		s[yun - hup - 1] = cup;
	}
}
