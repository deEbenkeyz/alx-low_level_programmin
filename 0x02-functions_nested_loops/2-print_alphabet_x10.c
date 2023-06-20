#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count = 0;

	while (count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		count++;
		_putchar('\n');
	}
}
