#include<stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: parameter
 * @b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
