#include "main.h"

/**
 * _strncat - function to concatenate string
 * @dest: string
 * @src: string
 * @n: number of elements to concantenate
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int c_01, c_02;

	for (c_01 = 0; dest[c_01] != '\0'; c_01++)
	{
		;
	}

	for (c_02 = 0; src[c_02] != '\0' && n > 0; c_02++, n--, c_01++)
	{
		dest[c_01] = src[c_02];
	}
	return (dest);
}
