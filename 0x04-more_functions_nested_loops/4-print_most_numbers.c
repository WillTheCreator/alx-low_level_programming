#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i = 2 || i = 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
