#include "main.h"

/**
 * _abs - the function computes absolute values of integers
 * @c: an integer containing a variable
 * Return: 0
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
