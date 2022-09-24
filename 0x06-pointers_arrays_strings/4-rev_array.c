#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: parameter that contains reversed content
 * @n: parameter containing data of the array
 * Return: contents of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i > n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}


