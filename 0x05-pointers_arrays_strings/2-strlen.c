#include "main.h"
/**
 * Main - strlen to check the lenght of a string
 * @s te
 * he string
 * Return: lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
