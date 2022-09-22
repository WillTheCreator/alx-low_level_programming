#include "main.h"

/**
 * stringManipulation - manipulate strings in different ways
 *
 * @str: string to be manipulated
 */
void stringManipulation(char *str)
{
	int len = getStringLength(str);
	int i;

	printf("THe length of the string is: %d\n", len);

	printf("String: %s\n", str);

	if (len == 1)
		printf("%s\n", str);
	else
	{
		for (i = len; i >= 0; i--)
			_putchar(str[i]);
		_putchar('\n');
	}
}
