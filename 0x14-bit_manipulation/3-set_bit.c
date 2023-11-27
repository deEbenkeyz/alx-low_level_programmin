#include "main.h"

/**
 * set_bit - setting a bit index to 1
 * @n: this is a pointer to the number to change
 * @index: bit index set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}