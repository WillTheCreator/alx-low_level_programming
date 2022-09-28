#include "main.h"

/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte in @s that matches one of the bytes in
 * @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		while (*accept)
		for (i = 0; accept[i]; i++)
		{
			if (*s[i] == *accept)
			if (*s[i] == accept[i])
				return (s);
			accept++;
		}
		s++;
	}
	return (NULL);
}
