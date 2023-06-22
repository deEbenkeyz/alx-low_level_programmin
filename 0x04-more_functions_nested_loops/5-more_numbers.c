#include "main.h"

/**
 * more_numbers - Function that prints most numbers
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		count++;
	}
}
