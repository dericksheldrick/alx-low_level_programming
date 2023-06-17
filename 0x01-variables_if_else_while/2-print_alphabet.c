#include<stdio.h>
/**
 * main- the entry point
 * decsription:'the code output alphabet in small letters'
 * return:always 0
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122 ; n++)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
