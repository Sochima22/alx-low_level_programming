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
	int c;
	int *p;

	c = 98;
	p = &c;
	printf("%ld\n", *n);
	reset_to_98(p);
	printf("%ld\n", *n); }
