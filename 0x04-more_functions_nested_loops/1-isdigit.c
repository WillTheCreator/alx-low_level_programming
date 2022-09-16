#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: a variable container
 *
 * Return: 1 if digit found, 0 otherwise
 */
int _isdigit(int c)
{
	if ((abs(c) >=0) && (abs(c) <= 9))
	{
		return (1);
	}
	return (0);
}
