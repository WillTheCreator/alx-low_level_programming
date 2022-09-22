#include <unistd.h>

/**
 * _putchar - prints character to stdout
 *
 * @c: character to print
 *
 * return: 0 or -1 with stderr set appropriately
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
