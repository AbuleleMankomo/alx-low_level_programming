#include "list.h"
#include <unistd.h>

/**
 * _putchar prints input to stdout
 * @c The input
 * Return: 1 on success and -1 on erroe
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
