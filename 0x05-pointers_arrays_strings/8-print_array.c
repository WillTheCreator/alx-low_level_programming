#include<stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		if (i !=n -1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	putchar('\n');
}
