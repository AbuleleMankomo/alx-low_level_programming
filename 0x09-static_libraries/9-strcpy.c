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

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
