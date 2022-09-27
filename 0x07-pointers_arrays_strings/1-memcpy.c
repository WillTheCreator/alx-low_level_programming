#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination to where the data is copied to
 * @src: source from where the data is copied from
 * @n: the number of bytes to fil
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
