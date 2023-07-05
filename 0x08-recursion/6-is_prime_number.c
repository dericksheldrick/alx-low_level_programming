#include<stdio.h>
#include"main.h"
int show_prime(int n, int i);
/**
 * is_prime_number - return prime numbers
 * @n: input the integer
 * Return: 1- prime number 0- otherwise
 */
int is_prime_number(int n)
{
	return (show_prime(n, 1));
}
/**
 * show_prime - show prime numbers
 * @n: number to be checked
 * @i: iterate n
 * Return: 1-prime number 0-otherwise
 */
int show_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (show_prime(n, i + 1));
}
