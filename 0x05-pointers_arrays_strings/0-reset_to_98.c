#include<stdio.h>
#include"main.h"
/**
*reset_to_98-takes a pointer and update the value to 98*
*@*n:pointer to change value*
*description: takes the pionter to value98*
*Return:nothing
*/
void reset_to_98(int *n)
{
	int c = 98;
	int *p;

	p = &c;

	reset_to_98(p);
	_putchar((*n / 10) + '0');
	_putchar((*n % 10) + '0'); }
