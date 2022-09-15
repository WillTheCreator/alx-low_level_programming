#include "main.h"

/**
 * _isalpha - is a prototype function used to check the alphabetic character
 * @c: an int variable used to identify the uppercase or lowercase o the alphabet
 * Return:1 if c is lowercase or uppercase||0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
