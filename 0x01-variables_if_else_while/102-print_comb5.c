#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int value_1, value_2;

	for (value_1 = 0; value_1 <= 98; value_1++)
	{
		for (value_2 = value_1 + 1; value_2 <= 99; value_2++)
		{
			putchar((value_1 / 10) + '0');
			putchar((value_1 % 10) + '0');
			putchar(' ');
			putchar((value_2 / 10) + '0');
			putchar((value_2 % 10) + '0');

			if (value_1 == 98 && value_2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
