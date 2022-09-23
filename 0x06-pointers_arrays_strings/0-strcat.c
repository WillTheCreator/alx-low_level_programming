#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the reulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	size_t Ldest = strlen(dest);

	for (i = 0; i < src['\0']; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest[dest_len + i] = '\0');
}	
