#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer address to variable holding a string
 * @s2: pointer address to variable holding a string
 * Return: 0 if not simmilar, 1 if similar
 */
int _strcmp(char *s1, char *s2)
{
	int mark = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			mark = 1;
		}
		s1++;
		s2++;
	}
	if (*s1 != '\0' || *s2 != '\0')
		return (1);
	if (mark == 0)
		return (0);
	else
		return (1);
}
