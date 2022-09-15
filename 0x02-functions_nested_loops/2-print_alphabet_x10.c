#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void);
{
	int i;
	while (i < 10)
	{
		int c;
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
		}
		i++
		_putchar('\n');
	}
}
