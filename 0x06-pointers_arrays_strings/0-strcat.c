#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the reulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	size_t Ldest = strlen(dest);

	for (i = 0; i < src['\0]; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}	
