#include "main.h"
/**
 * print line - print a straight line
 * @n - number of times
 * Return: Always 0
 */
void print_line(int n)
{
	int l;

	if (n > 0)

	{
		for (l = 0; l < n; l++)
			_putchar('_');
	}
	_putchar('\n');
}
