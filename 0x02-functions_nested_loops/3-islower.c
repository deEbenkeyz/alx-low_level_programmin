#include "main.h"

/**
 * main - Check if letter is lowercase
 *
 *
 * Return: Always 0 
 */

int _islower(int val)
{
	if (val >= 97 && val <= 122)
	{
		return (1);
	}
	return (0);   
}
