#include "variadic_functions.h"
#include <unistd.h>
/**
 * _putchar prints input to stdout
 * @c- input
 * Return: 1 on success -1 on error
 */
int _putchar(char c)
{
	return(write(1, &c, 1))
}
