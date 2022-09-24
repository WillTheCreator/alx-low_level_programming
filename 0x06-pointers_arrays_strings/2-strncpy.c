#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the destination that a string is copied to
 * @src: the source that the string is copied from
 * @n: maximum number of bytes used to store string
 * Return:the final destination of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
