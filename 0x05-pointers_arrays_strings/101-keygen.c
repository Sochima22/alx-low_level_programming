#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
*main-generates krygen
*Return:0
*/
int main(void)
{
	int x = 0; c =0;
	time_t t;

	srand((unsigned int) time (&t));
	while (c < 2772)
	{
		x = rand() % 128;
		if ((c + x) > 2772)
			break;
		c = c + x;
		printf("%c", x);
	}
	printf("%c\n", (2772 - c ));
	return (0);
}
