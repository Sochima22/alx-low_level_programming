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
		(n > 0)
		{printf("%d is negative", n); }
	else
		if
			(n == 0)
			{printf("is zero %d", n); }
				else
{printf("is negative %d", n); }
return (0); }
