#include<stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: parameter
 * Return: length of a string
 */
int _strlen(char *s)
{
	return strchr( s, '\0') - s;
}
