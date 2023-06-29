#include "main.h"

/**
 * _strcat - concatebate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest1`
 */

char *_strcat(char *dest, char *src)
{
	int count_01, count_02;

	for (count_01 = 0; dest[count_01] != '\0'; count_01++)
	{
		;
	}

	for (count_02 = 0; src[count_02] != '\0'; count_02++)
	{
		dest[count_01] = src[count_02];
		count_01++;
	}

	dest[count_01] = '\0';
	return (dest);
}
