#include "main.h"
#include <unistd.h>
/**
 * _putchar  - write the character c to standard output
 * @c: character to print
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}