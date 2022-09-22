#include<stdio.h>
#include<string.h>
#include "main.h"

/**
 * strcat - a function that concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the reulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int L1, L2, i;
	L1 = strlen(*src);
	L2 = strlen(*dest);

	
