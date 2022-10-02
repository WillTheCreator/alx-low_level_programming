#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 * Return: always 0
 */
int amin(int arg _attribute_((unused)), char *argv[])
{
	printf("%\n", argv[0]);
	return (0);
}
