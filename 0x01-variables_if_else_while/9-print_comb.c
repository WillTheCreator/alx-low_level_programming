#include <stdio.h>

int main(void)
{
	int a = '0';
	for(a; a < '9' ;a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return(0);
}
