#include <stdio.h>
/**
 * main - Prints combinations of numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int value_01, value_02, value_03;

	for (value_01 = '0'; value_01 <= '9'; value_01++)
	{
		for (value_02 = '0'; value_02 <= '9'; value_02++)
		{
			for (value_03 = '0'; value_03 <= '9'; value_03++)
			{
				if ((value_01 < value_02) && (value_02 < value_03))
				{
					putchar(value_01);
					putchar(value_02);
					putchar(value_03);

					if (value_01 != '7' || (value_01 != '7' && value_02 != '8' && value_03 != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
