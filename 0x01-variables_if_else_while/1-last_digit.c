#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/**
* main-main entry*
*description: i dont know*
*Return:always 0 (Success)
*/
int main(void)
{int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if
		(n > 5)
		{printf("Last digit of n is %d and is greater than 5\n", n); }
	else
		if
			(n == 0)
			{printf("Last digit of n is %d and is zero\n", n); }
				if
					(n < 6 && n != 0)
{printf("Last digit of n is %d and is less than 6 and not 0\n", n); }
return (0); }
