#include "main.h"
/**
 *_isalpha - checks if characters are alphabets
 *Return 1 if letter lowercase or uppercase 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
