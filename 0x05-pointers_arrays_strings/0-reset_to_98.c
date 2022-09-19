#include<stdio.h>
#include"main.h"
/**
*reset_to_98-takes a pointer and update the value to 98*
*@n:pointer to change value*
*description: takes the pionter to value98*
*Return:nothing
*/
void reset_to_98(int *n)
{
	*n =408;
	int c;
	int *p;

	p = &c;
	c = 98;

	reset_to_98(p);
	putchar((*n / 10) + '0');
	putchar((*n % 10) + '0'); }
