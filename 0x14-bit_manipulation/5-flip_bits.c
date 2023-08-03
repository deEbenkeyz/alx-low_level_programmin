#include "main.h"

/**
 * flip_bits - this counts the number of bits that
 * should be changed to get from one number to another
 * @n: first value
 * @m: second value
 *
 * Return: this returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int value_i, counter = 0;
	unsigned long int current_val;
	unsigned long int exclusive_val = n ^ m;

	for (value_i = 63; value_i >= 0; value_i--)
	{
		current_val = exclusive_val >> i;
		if (current_val & 1)
			counter++;
	}

	return (counter);
}
