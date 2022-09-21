#include<stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: a parameter
 * Return: void
 */
void rev_string(char *s)
{
	int rts = '\0';

	while (*(s + rts) < '\0')
	{
		putchar(*(s + rts));
		rts--;
	}
	putchar('\n');
}
