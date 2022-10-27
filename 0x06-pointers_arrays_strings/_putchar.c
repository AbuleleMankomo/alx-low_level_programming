#include "main.h"
#include <stdio.h>
/**
 * _putchar - write character c to standard output
 * Return: always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
