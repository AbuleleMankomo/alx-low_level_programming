#include "main.h"
/**
 * times_table - print the 9 times table
 */
void time_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{

		for (mult = 1; mult <= 9; mult++)
		{
			prod = num * mult;

			if ((prod / 10) == 0)
			{
				if (mult == 0)
				{
					_putchar('0');
				}
				if (mult != 0)
				{
					_putchar(' ');
					_putchar((prod % 10) + '0');

					if (num < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
					if (mult < 9)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
