#include<stdio.h>
#include"main.h"
/**
*print_last_digit-main entry*
*description:printing last digit*
*@n: the int to extract the last digit fromnumber*
*Return:the value of the last digit
 */
int print_last_digit(int n)
{int a;

	if (n < 0)
	{n = -n; }
	a =  n % 10;
		if (a < 0)
		{a = -a; }
	_putchar(a + '0');
	return (0); }