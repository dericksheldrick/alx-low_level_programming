#include"main.h"

/**
*binary_to_uint - converts a binary number to an unsigned int
*@b: contain the binary numbers to convert
*Return:converted numbers
*/
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec = 2 * dec + (b[a] - '0');
	}

	return (dec);
}

