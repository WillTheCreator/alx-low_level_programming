#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the integer number of the factorial to be obtained
 *
 * Return: n*(n-1)*(n-2)... for n > 1, 0 for n = 1, -1 for n < 0
 */

int factorial(int n)
{
	int n_factorial;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	n_factorial = factorial(n - 1);
	return (n * n_factorial);
}
