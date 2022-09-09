#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha;
char new = '\n';

for (alpha = 'a'; alpha <= 'z' ; ++alpha)
{
putchar(alpha);
}
putchar(new);
return (0);
}
