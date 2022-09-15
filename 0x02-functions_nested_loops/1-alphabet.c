#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets a to z
 *
 * Return: void
 */
void print_alphabet(void)
{
int let;
for (let = 'a'; let <= 'z' ; let++)
{
_putchar(let);
}

_putchar('\n');
}
