#include "main.c"
#include <unistd.h>
/**
 * _putchar prints input to the stdout
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
