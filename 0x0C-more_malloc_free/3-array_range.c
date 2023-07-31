#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int k, sizes;

	if (min > max)
		return (NULL);

	sizes = max - min + 1;

	ptr = malloc(sizeof(int) * sizes);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		ptr[k] = min++;

	return (ptr);
}

