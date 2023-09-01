#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int loop_counter, main_count = 0;
	unsigned long int current_value;

	for (loop_counter = 63; loop_counter >= 0; loop_counter--)
	{
		current_value = n >> loop_counter;

		if (current_value & 1)
		{
			_putchar('1');
			main_count++;
		}
		else if (main_count)
			_putchar('0');
	}
	if (!main_count)
		_putchar('0');
}
