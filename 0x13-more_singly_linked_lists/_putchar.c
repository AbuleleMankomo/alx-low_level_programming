#include "lists.h"
#include <stdlib.h>

/**
 * _putchar print input to stdout
 * @c character to print
 * Return: 1 on succeess -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
