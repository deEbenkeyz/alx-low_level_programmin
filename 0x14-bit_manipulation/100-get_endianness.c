#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int val_i = 1;
	char *val_c = (char *) &val_i;

	return (*val_c);
}
