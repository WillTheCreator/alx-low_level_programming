#include "main.h"

/**
 * times_table - function that prints the 9 time table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int x = 0;
	while (i <= 9)
	{
		while (x <= 9)
		{
			_putchar(i * x);
			x++;
			_putchar('\n');
		}
	i++;
	return;
	}
}
