#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 ** main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int Last_Dig (int n)
{
return (n % 10);
}
if (Last_Dig > 5)   
{                                                                                                                                   printf("Last digit of %d is %d and is greater than 5\n",n,Last_Dig);                                                                  }
else if (n == 0)
printf("Last digit of %d is %d and is 0\n",n,Last_Dig);
}                                                                                                                                     else if(Last_Dig < 6 and Last_dig !=0 )                                                                                               
}
printf("Last digit of %d is %d and is less than 6 and not 0", n,Last_Dig);    
}
else
{
return (0);
}
return (0);
}