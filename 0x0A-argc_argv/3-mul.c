#include<stdio.h>
#include"main.h"
#include<stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count argumrnt
 * @argv: argument vector
 * Return: always zero
 * 1 when no two argument
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
