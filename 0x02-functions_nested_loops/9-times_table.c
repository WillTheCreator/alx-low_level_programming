#include "main.h"

/**
 * times_table - function that prints the 9 time table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int x;
	int prod;
	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (x= 0; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');
			prod = i * x;
			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
