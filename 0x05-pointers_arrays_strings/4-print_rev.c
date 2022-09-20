#include<stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int i = '\0';

	while (*(s - i) < '\0')
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
