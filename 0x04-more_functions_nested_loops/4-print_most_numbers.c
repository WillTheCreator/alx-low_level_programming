#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;
	for (i = 28; i < 38; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
