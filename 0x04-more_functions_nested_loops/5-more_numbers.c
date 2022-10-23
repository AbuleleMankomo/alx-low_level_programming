#include "main.h"

/**
 * more numbers - numbers 0 - 14 10 times
 * Return: always 0
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < 15; b++) 
		{
			if (b >= 10)
				_putchar('1');
			_putchar(b % 10 + 9);
		}
		_putchar('\n');
	}
}
