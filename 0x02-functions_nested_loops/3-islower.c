#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *@c - is an int that is used as an argument of the function
 * Return: 1 if successfull || 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
