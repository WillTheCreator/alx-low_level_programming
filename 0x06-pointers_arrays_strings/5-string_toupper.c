#include "main.h"

/**
 * string_toupper - function changing lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
