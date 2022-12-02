#include "main.h"
#include <stdlib.h>
/**
 * _putchar prints input to stdout
 * @c input
 * Return: 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
