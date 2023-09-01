#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: search number
 * @index: bit index
 *
 * Return: return bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
