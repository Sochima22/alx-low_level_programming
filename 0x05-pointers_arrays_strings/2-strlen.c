#include<stdio.h>
#include"main.h"
/**
*_strlen-print the length of a string*
*@s:parameter to print*
*Return:length
*/
int _strlen(char *s)
{
	int x = 0;

	while (*s++)
		x++;
	return (x); }
