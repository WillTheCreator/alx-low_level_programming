#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * print_rev - fn prints a string, in reverse, followed by a new line
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
