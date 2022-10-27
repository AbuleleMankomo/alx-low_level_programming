#include "main.h"
#include "string.h"
/**
 * strncpy - copies a string
 * @dest - copy to
 * @src - copy from
 * return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < 0 && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
