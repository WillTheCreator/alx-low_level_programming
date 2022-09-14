#include <stdio.h>
#include "main.h"

/**
 * main - Entry Level
 *
 * Return: Always 0 (Successful)
 */
int void print_alphabet(void);
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
	return(0);
}


