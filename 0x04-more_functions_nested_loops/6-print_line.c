#include "main.h"
#include <stdio.h>

/**
 * print_line - a fn that draws a straight line
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
