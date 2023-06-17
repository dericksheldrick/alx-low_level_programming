#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/*main- entry point */
/*description -the code compare two numbers*/
/* Return is always zero */
int main(void)
{
	int n;
	int td;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	td = n % 10;
	if (td > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, td);
	} else if (td == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, td);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, td);
	}

	return (0);
}
