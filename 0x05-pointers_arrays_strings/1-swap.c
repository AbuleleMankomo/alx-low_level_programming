#include "main.h"
#include <stdio.h>
/**
 * int_swap - swap the value of two integers
 * @a- int a
 * @b - int b
 * return: always 0
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
