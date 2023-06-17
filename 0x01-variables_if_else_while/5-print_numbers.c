#include<stdio.h>
/**
 * main - the entry point
 * description:'a program that prints all single digit numbers'
 * return - always returning 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
