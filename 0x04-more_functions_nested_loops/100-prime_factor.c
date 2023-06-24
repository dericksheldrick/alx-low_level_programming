#include<stdio.h>
#include<math.h>
#include"main.h"
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed with newline
 * Return: always 0
 */
int main(void)
{
	long x;
	long maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxf = number / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
