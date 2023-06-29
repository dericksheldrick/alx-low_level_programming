#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @n: numberof items in the array
 * @a: an array of the integer
 * Return: nothing to return
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}


}
