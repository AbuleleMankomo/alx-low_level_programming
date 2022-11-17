#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar prints input to stdout
 * @c- the input
 * Return 1 on success and -1 on error
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
