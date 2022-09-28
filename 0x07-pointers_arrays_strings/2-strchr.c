#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: assigned pointer that contains the string
 * @c: assinged character that we are looking for
 * Return: pointer to the first occurrence of the character,
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
