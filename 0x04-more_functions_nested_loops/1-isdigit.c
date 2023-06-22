#include "main.h"
/**
 * _isdigit - function to check if value is a digit
 * @c: Value to be checked
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
