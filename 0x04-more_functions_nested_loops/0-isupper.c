#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: variable vontainer of an integer
 *
 * Return: 1 for uppercase, 0 for lowercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
