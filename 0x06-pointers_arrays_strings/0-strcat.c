#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the reulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i_src = 0, x_dest = 0;

	while (i_src++, x_dest++)
	{
		for (i_src = 0; src[i_src]; i_src++)
		{
			dest[x_dest++] = src[i_src];
		}
	}
	return (dest);
}
