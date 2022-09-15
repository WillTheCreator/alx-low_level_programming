#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 *
 * Return: 1 if successfull || 0 if otherwise
 */
int _islower(int c)
{
	for(c = 'a'; c <= 'z'; c++)
	{
		if (_islower(c))
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
