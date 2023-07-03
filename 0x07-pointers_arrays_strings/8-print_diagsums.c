#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals.
 * @a: pointer to an array of integers.
 * @size: size of the array.
 */
void print_diagsums(int *a, int size)
{
	int t, j;
	int sum1 = 0, sum2 = 0;

	for (t = 0; t < size; t++)
	{
		for (j = 0; j < size; j++)
		{
			if (t == j)
				sum1 += *(a + t * size + j);
			if ((t + j) == (size - 1))
				sum2 += *(a + t * size + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}

