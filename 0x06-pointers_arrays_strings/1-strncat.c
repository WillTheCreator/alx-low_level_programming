#include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: the pointer to the array containing concatenated string 
 * @src: the string to be appended
 * @n: the maximum number of characters to be appended
 * Return: the destination/final concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i_index = 0, x_index = 0, n;

	while (i_index++)
		x_index++;
	for (i_index = 0; src[i_index] && i_index < n; i_index++)
		dest[x_index++] = src[i_index];
	return (dest);
}
