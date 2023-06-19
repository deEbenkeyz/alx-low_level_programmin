#include <stdio.h>
/**
 * main - Prints combinations of numbers
 *
 * Return: Always (success)
 */
int main(void)
{
	int val_01, val_02, val_03;

	for (val_01 = '0'; val_01 <= '9'; val_01++)
	{
		for (val_02 = '0'; val_02 <= '9'; val_02++)
		{
			for (val_03 = '0'; val_03 <= '9'; val_03++)
			{
				if ((val_01 < val_02) && (val_02 < val_03))
				{
					putchar(val_01);
					putchar(val_02);
					putchar(val_03);

					if (val_01 != '7' || (val_01 != '7' && val_02 != '8' && val_03 != '9'))
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
