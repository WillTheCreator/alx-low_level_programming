#include <stdio.h>
#include "main.h"

/**
 * print letter- prints alphabets a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
	return;
}
