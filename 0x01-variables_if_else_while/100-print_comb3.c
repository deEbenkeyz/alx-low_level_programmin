#include <stdio.h>
/**
 * main - Prints combinations of numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int value_one, value_two;
	
	for (value_one = '0'; value_one <= '9'; value_one++)
	{
		for (value_two = '0'; value_two <= '9'; value_two++)
		{
			if (value_one < value_two)
			{
				putchar(value_one);
				putchar(value_two);

				if ((value_one != '8') || (value_one != '8' && value_two != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');
	return (0);
}
