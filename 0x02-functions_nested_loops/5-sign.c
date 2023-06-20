#include "main.h"
/**
 * print_sign - prints a sign
 * @n: value to be checked
 *
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n>0)
	{
		_putchar('+');
	}
	else if (n==0)
	{
		_putchar('0');
	}
	else if (n<-1)
	{
		_putchar('-');
	}
	return (0);
}
