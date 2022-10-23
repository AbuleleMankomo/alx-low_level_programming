#include "main.h"
/**
 * print triangle - prints traingle
 * @n - size of the truangle
 * return: always 0
 */

void print_triangle(int size)
{
	int h, tri;

	if (n < 0)
	{
		for (h = 0; h <= n; h++)
		{
			for (tri = n - 0; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < h; tri++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
		_putchar('\n');
}
