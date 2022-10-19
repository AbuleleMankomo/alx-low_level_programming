#include "main.h"

/**
 *print alphabets x10 - priny alpha 10 times in lower case
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
	int ten;

	char c;

	for (ten = '0'; ten <= '9'; ten++)
	{
		for (c = '0'; c <= '9'; c++)

		_putchar(c);
	_putchar('\n');
	}
}
