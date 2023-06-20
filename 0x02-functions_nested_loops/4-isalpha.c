#include "main.h"
/**
 * _isalpha - Checks if character is an Alphabet case
 * @c:  the character to be checked
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 61 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
