#include<stdio.h>
#include"main.h"
/**
*main-print either number*
*or fizz or buzz or fizzbuzz*
*Return:returns 0
*/
int main(void)
{
	int num = 1;

	for (; num < 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if ((num % 3) == 0)
			printf("Fizz ");
		else if ((num % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("Buzz \n");
	return (0);
}
