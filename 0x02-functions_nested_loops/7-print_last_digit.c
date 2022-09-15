#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @c: an integer variable assigned to a number
 * Return: Always 0
 */
int print_last_digit(int c)
{
int last_dit = c % 10;
if (last_dit < 0)
{
last_dit *= -1;
}
_putchar(last_dit + '0');
return (last_dit);
}
