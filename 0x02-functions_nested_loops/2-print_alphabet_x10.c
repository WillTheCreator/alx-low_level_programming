#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void);
{
	int i = 0;
	char c;
	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++
		_putchar('\n');
	}
}
