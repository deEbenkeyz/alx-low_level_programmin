#include "main.h"

/**
 * _isupper - Function to check if character is uppercase.
 *@c: value to be checked.
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
