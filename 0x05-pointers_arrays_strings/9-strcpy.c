#include "main.h"
#include <stdio.h>
/**
 * strcpy - copies the string pointed to the source
 * @dest: destination
 * @src: source
 * return: string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(src + len))
	{
		len++;
	}
	for ( ; i < len ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len) = '\0';
	return (dest);
}
