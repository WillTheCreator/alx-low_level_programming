#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the reulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i_index = 0, x_dest = 0;

	while (dest[i_index++])
		x_dest++;
	for (i_index = 0; src[i_index]; i_index++)
		dest[x_dest++] = src[i_index];
	return (dest);
}
