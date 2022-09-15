#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: Always 0
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
	return(0);
	}
}
