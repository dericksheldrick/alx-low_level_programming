#include<stdio.h>
#include"main.h"
/**
 * main - prints all arguments it receives.
 * @argc: counts the argument
 * @argv:arguments vector
 */
int main (int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++ )
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
