#include "main.h"

/**
 * print_line - A function to print line
 * @n: Value to be checked
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int line;

		for (line = 0; line < n; line++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
