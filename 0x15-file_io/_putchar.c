#include "main.h"
#include <stdio.h>
/**
 * _putchar prints input to stdout
 * @c input
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
