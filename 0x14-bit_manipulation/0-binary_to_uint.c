#include "main.h"

/**
 * binary_to_uint - this converts a binary number to unsigned integer
 * @b: a string containing the binary number
 *
 * Return: this returns the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[count] - '0');
	}

	return (decimal_val);
}
