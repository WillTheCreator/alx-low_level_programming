#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer address to variable holding a string
 * @s2: pointer address to variable holding a string
 * Return: var if not simmilar, nothing if similar
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, var = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			var = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			var = s1[i];
			break
		}
		else if (s1[i] != s2[i])
		{
			var = s1[i] - s2[i];
			break;
		}
		else
			i++;
	}
	return (var);
}
