#include "main.h"
#include <stdio.h>

/**
 * stringManipulation - manipulate strings in different ways
 *
 * @str: string to be manipulated
 */
void stringManipulation(char *str)
{
	int len = getStringLength(str);

	printf("THe length of the string is: %d\n", len);
}
