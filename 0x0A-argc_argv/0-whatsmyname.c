#include<stdio.h>
#include"main.h"
/**
 * main-  prints its name
 * followed by new line
 * @argc: count arguments
 * @argv: argument vector
 * Return:always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
