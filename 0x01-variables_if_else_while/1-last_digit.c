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
		(n < 6)
		{printf("Last digit of %d is -8 and is less than 6 and not 0\n", n); }
	else
		if
			(n == 980)
			{printf("Last digit of %d is 0 and is 0\n", n); }
		else
			if
				(n == 98)
				{printf("Last digit of %d is 8 and is greater than 5\n", n); }
	return (0); }
