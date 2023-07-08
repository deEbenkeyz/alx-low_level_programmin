#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - function to multiply two arguments to program
* @argc: argument to determine how many arguments to program are provided
*
* @argv: argument array with program name and arguments
*
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int x, y, results;

	results = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (x = 1; x <= (argc - 1); x++)
		{
			for (y = 0; argv[x][y]; y++)
			{
				if (isdigit(argv[x][y]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			if (atoi(argv[x]) >= 0)
			{
				results += atoi(argv[x]);
			}
		}
	}
	printf("%d\n", results);
	return (0);
}
