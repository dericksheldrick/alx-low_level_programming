#include<stdio.h>
/**
 *main - entry points
 *description:'a program that prints all single digit numbers'
 *return always return zero
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
