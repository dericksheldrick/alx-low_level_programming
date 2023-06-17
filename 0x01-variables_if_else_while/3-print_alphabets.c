#include<stdio.h>
/**
 * main -entry point
 * description:code that print out the all letters
 * return always 0
 */
int main(void)
{
	char a = 97;
	char A = 65;

	while (a <= 122)
	{
		putchar(a);
		a++;
	}
	while (A <= 90)
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);

}
