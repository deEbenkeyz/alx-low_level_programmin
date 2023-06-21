#include "main.h"

/**
 * print_last_digit - Main function
 * @val: value to be checked
 * Return: Always 0.
 */
int print_last_digit(int val)
{
	int last;

	last = val % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
